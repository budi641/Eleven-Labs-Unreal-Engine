#include "ElevenLabsTTSService.h"

#include "Async/Async.h"
#include "Dom/JsonObject.h"
#include "ElevenLabsLog.h"
#include "ElevenLabsSettings.h"
#include "ElevenLabsWavBuilder.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"

namespace ElevenLabsApi
{
	static bool SupportsLatencyOptimization(const FString& ModelId)
	{
		// ElevenLabs currently rejects optimize_streaming_latency for eleven_v3.
		return !ModelId.Equals(TEXT("eleven_v3"), ESearchCase::IgnoreCase);
	}

	static FString BuildStreamUrl(const FString& VoiceId, int32 SampleRate, int32 LatencyOptimizationLevel, bool bEnableLogging, const FString& ModelId)
	{
		const FString BaseUrl = FString::Printf(
			TEXT("https://api.elevenlabs.io/v1/text-to-speech/%s/stream?output_format=pcm_%d&enable_logging=%s"),
			*VoiceId,
			SampleRate,
			bEnableLogging ? TEXT("true") : TEXT("false"));

		if (!SupportsLatencyOptimization(ModelId))
		{
			return BaseUrl;
		}

		return FString::Printf(TEXT("%s&optimize_streaming_latency=%d"), *BaseUrl, LatencyOptimizationLevel);
	}
}

void FElevenLabsTTSService::Synthesize(
	const FString& Text,
	const FElevenLabsTTSConfig& Config,
	const FElevenLabsOnChunkNative& OnChunk,
	const FElevenLabsOnCompletedNative& OnCompleted,
	const FElevenLabsOnErrorNative& OnError)
{
	ChunkCallback = OnChunk;
	CompletedCallback = OnCompleted;
	ErrorCallback = OnError;
	ActiveConfig = Config;
	AccumulatedPcm.Reset();
	PcmRemainder.Reset();
	LastStreamedByteCount = 0;
	ChunkCounter = 0;

	if (Text.TrimStartAndEnd().IsEmpty())
	{
		Fail(TEXT("Text cannot be empty."));
		return;
	}

	if (ActiveConfig.VoiceId.TrimStartAndEnd().IsEmpty())
	{
		Fail(TEXT("VoiceId is required."));
		return;
	}

	const FString ApiKey = ResolveApiKey();
	if (ApiKey.IsEmpty())
	{
		Fail(TEXT("ElevenLabs API key is missing. Set it in Project Settings > Plugins > Eleven Labs."));
		return;
	}

	const FString Url = ElevenLabsApi::BuildStreamUrl(
		ActiveConfig.VoiceId,
		FMath::Max(8000, ActiveConfig.SampleRate),
		FMath::Clamp(ActiveConfig.LatencyOptimizationLevel, 0, 4),
		ActiveConfig.bEnableLogging,
		ActiveConfig.ModelId);

	if (!ElevenLabsApi::SupportsLatencyOptimization(ActiveConfig.ModelId))
	{
		UE_LOG(LogElevenLabs, Verbose, TEXT("Skipping optimize_streaming_latency because model '%s' does not support it."), *ActiveConfig.ModelId);
	}
	UE_LOG(LogElevenLabs, Log, TEXT("Starting ElevenLabs stream request to voice '%s' with sample rate %d and model '%s'."),
		*ActiveConfig.VoiceId,
		FMath::Max(8000, ActiveConfig.SampleRate),
		*ActiveConfig.ModelId);

	const TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetVerb(TEXT("POST"));
	Request->SetURL(Url);
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Accept"), TEXT("application/octet-stream"));
	Request->SetHeader(TEXT("xi-api-key"), ApiKey);
	Request->SetTimeout(ActiveConfig.RequestTimeoutSeconds > 0.0f ? ActiveConfig.RequestTimeoutSeconds : GetDefault<UElevenLabsSettings>()->DefaultTimeoutSeconds);
	Request->SetContentAsString(BuildJsonPayload(Text, ActiveConfig));

	Request->OnRequestProgress64().BindRaw(this, &FElevenLabsTTSService::HandleRequestProgress);
	Request->OnProcessRequestComplete().BindRaw(this, &FElevenLabsTTSService::HandleRequestComplete);
	ActiveRequest = Request;

	if (!Request->ProcessRequest())
	{
		Fail(TEXT("Failed to start ElevenLabs HTTP request."));
	}
}

void FElevenLabsTTSService::HandleRequestProgress(FHttpRequestPtr Request, uint64 BytesSent, uint64 BytesReceived)
{
	(void)BytesSent;
	(void)BytesReceived;

	if (!Request.IsValid())
	{
		return;
	}

	const FHttpResponsePtr Response = Request->GetResponse();
	if (!Response.IsValid())
	{
		return;
	}

	const TArray<uint8>& CurrentBytes = Response->GetContent();
	if (CurrentBytes.Num() <= LastStreamedByteCount)
	{
		return;
	}

	const int32 DeltaSize = CurrentBytes.Num() - LastStreamedByteCount;
	TArray<uint8> DeltaChunk;
	DeltaChunk.Append(CurrentBytes.GetData() + LastStreamedByteCount, DeltaSize);
	LastStreamedByteCount = CurrentBytes.Num();

	if (PcmRemainder.Num() > 0)
	{
		DeltaChunk.Insert(PcmRemainder, 0);
		PcmRemainder.Reset();
	}

	if ((DeltaChunk.Num() % 2) != 0)
	{
		PcmRemainder.Add(DeltaChunk.Last());
		DeltaChunk.SetNum(DeltaChunk.Num() - 1);
	}

	if (DeltaChunk.Num() == 0)
	{
		return;
	}

	AccumulatedPcm.Append(DeltaChunk);

	if (ActiveConfig.ChunkMode == EElevenLabsChunkMode::Progressive && ChunkCallback.IsBound())
	{
		TArray<uint8> ChunkWavBytes;
		FElevenLabsWavInfo ChunkWavInfo;
		if (!FElevenLabsWavBuilder::BuildFromPcm16(DeltaChunk, FMath::Max(8000, ActiveConfig.SampleRate), 1, ChunkWavBytes, ChunkWavInfo))
		{
			return;
		}

		FElevenLabsAudioChunk Chunk;
		Chunk.Data = MoveTemp(ChunkWavBytes);
		Chunk.ChunkIndex = ChunkCounter++;

		AsyncTask(ENamedThreads::GameThread, [Callback = ChunkCallback, Chunk]()
		{
			Callback.ExecuteIfBound(Chunk);
		});
	}
}

void FElevenLabsTTSService::HandleRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
	ActiveRequest.Reset();

	if (!bConnectedSuccessfully || !Response.IsValid())
	{
		Fail(TEXT("ElevenLabs request failed or timed out."));
		return;
	}

	const int32 ResponseCode = Response->GetResponseCode();
	if (ResponseCode < 200 || ResponseCode >= 300)
	{
		const FString BodyString = Response->GetContentAsString();
		Fail(FString::Printf(TEXT("ElevenLabs request returned HTTP %d: %s"), ResponseCode, *BodyString.Left(512)));
		return;
	}
	UE_LOG(LogElevenLabs, Verbose, TEXT("ElevenLabs request succeeded with status %d."), ResponseCode);

	if (AccumulatedPcm.Num() == 0)
	{
		AccumulatedPcm = Response->GetContent();
	}

	if (PcmRemainder.Num() > 0)
	{
		UE_LOG(LogElevenLabs, Warning, TEXT("Discarding %d trailing PCM byte(s) that did not form a complete 16-bit sample."), PcmRemainder.Num());
		PcmRemainder.Reset();
	}

	if (AccumulatedPcm.Num() == 0)
	{
		Fail(TEXT("ElevenLabs returned empty audio data."));
		return;
	}

	CompleteFromPcm(AccumulatedPcm);
}

void FElevenLabsTTSService::Fail(const FString& Message)
{
	ActiveRequest.Reset();
	UE_LOG(LogElevenLabs, Error, TEXT("%s"), *Message);
	AsyncTask(ENamedThreads::GameThread, [Callback = ErrorCallback, Message]()
	{
		Callback.ExecuteIfBound(Message);
	});
}

void FElevenLabsTTSService::CompleteFromPcm(const TArray<uint8>& PcmBytes)
{
	TArray<uint8> WavBytes;
	FElevenLabsWavInfo WavInfo;
	if (!FElevenLabsWavBuilder::BuildFromPcm16(PcmBytes, FMath::Max(8000, ActiveConfig.SampleRate), 1, WavBytes, WavInfo))
	{
		Fail(TEXT("Failed to package ElevenLabs PCM data into WAV."));
		return;
	}

	FElevenLabsTTSResult Result;
	Result.WavBytes = MoveTemp(WavBytes);
	Result.SampleRate = WavInfo.SampleRate;
	Result.NumChannels = WavInfo.NumChannels;
	Result.DurationSeconds = WavInfo.DurationSeconds;
	UE_LOG(LogElevenLabs, Log, TEXT("Built WAV output. PCM bytes: %d, WAV bytes: %d, duration: %.2fs."),
		PcmBytes.Num(),
		Result.WavBytes.Num(),
		Result.DurationSeconds);

	AsyncTask(ENamedThreads::GameThread, [Callback = CompletedCallback, Result]()
	{
		Callback.ExecuteIfBound(Result);
	});
}

FString FElevenLabsTTSService::BuildJsonPayload(const FString& Text, const FElevenLabsTTSConfig& Config) const
{
	TSharedRef<FJsonObject> Root = MakeShared<FJsonObject>();
	Root->SetStringField(TEXT("text"), Text);
	Root->SetStringField(TEXT("model_id"), Config.ModelId);

	if (!Config.LanguageCode.IsEmpty())
	{
		Root->SetStringField(TEXT("language_code"), Config.LanguageCode);
	}

	if (!Config.PreviousText.IsEmpty())
	{
		Root->SetStringField(TEXT("previous_text"), Config.PreviousText);
	}

	if (!Config.NextText.IsEmpty())
	{
		Root->SetStringField(TEXT("next_text"), Config.NextText);
	}

	if (Config.Seed >= 0)
	{
		Root->SetNumberField(TEXT("seed"), Config.Seed);
	}

	TSharedRef<FJsonObject> VoiceSettings = MakeShared<FJsonObject>();
	VoiceSettings->SetNumberField(TEXT("stability"), Config.Stability);
	VoiceSettings->SetNumberField(TEXT("similarity_boost"), Config.SimilarityBoost);
	VoiceSettings->SetNumberField(TEXT("style"), Config.Style);
	VoiceSettings->SetBoolField(TEXT("use_speaker_boost"), Config.bUseSpeakerBoost);
	VoiceSettings->SetNumberField(TEXT("speed"), Config.Speed);
	Root->SetObjectField(TEXT("voice_settings"), VoiceSettings);

	FString Output;
	const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Output);
	FJsonSerializer::Serialize(Root, Writer);
	return Output;
}

FString FElevenLabsTTSService::ResolveApiKey() const
{
	const UElevenLabsSettings* Settings = GetDefault<UElevenLabsSettings>();
	return Settings ? Settings->ApiKey.TrimStartAndEnd() : FString();
}
