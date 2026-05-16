#include "ElevenLabsSynthesizeTextAsync.h"

#include "ElevenLabsLog.h"
#include "ElevenLabsTTSService.h"

UElevenLabsSynthesizeTextAsync* UElevenLabsSynthesizeTextAsync::SynthesizeTextToWav(UObject* InWorldContextObject, const FString& Text, FElevenLabsTTSConfig Config)
{
	UElevenLabsSynthesizeTextAsync* Node = NewObject<UElevenLabsSynthesizeTextAsync>();
	Node->RegisterWithGameInstance(InWorldContextObject);
	Node->WorldContextObject = InWorldContextObject;
	Node->PendingText = Text;
	Node->PendingConfig = Config;
	UE_LOG(LogElevenLabs, Verbose, TEXT("Created async TTS node. Text length: %d, VoiceId: %s"), Text.Len(), *Config.VoiceId);
	return Node;
}

void UElevenLabsSynthesizeTextAsync::Activate()
{
	UE_LOG(LogElevenLabs, Log, TEXT("Activating ElevenLabs TTS request. ChunkMode: %s"), PendingConfig.ChunkMode == EElevenLabsChunkMode::Progressive ? TEXT("Progressive") : TEXT("AssembleThenReturn"));
	Service = MakeShared<FElevenLabsTTSService>();
	Service->Synthesize(
		PendingText,
		PendingConfig,
		FElevenLabsOnChunkNative::CreateUObject(this, &UElevenLabsSynthesizeTextAsync::HandleChunk),
		FElevenLabsOnCompletedNative::CreateUObject(this, &UElevenLabsSynthesizeTextAsync::HandleCompleted),
		FElevenLabsOnErrorNative::CreateUObject(this, &UElevenLabsSynthesizeTextAsync::HandleError));
}

void UElevenLabsSynthesizeTextAsync::SetReadyToDestroy()
{
	Service.Reset();
	UE_LOG(LogElevenLabs, Verbose, TEXT("Destroying ElevenLabs async node."));
	Super::SetReadyToDestroy();
}

void UElevenLabsSynthesizeTextAsync::HandleChunk(const FElevenLabsAudioChunk& Chunk)
{
	UE_LOG(LogElevenLabs, VeryVerbose, TEXT("Received chunk %d (%d bytes)."), Chunk.ChunkIndex, Chunk.Data.Num());
	OnReceive.Broadcast(
		Chunk.Data,
		/*bIsFinal*/ false,
		Chunk.ChunkIndex,
		FMath::Max(8000, PendingConfig.SampleRate),
		/*NumChannels*/ 1,
		/*DurationSeconds*/ 0.0f);
}

void UElevenLabsSynthesizeTextAsync::HandleCompleted(const FElevenLabsTTSResult& Result)
{
	UE_LOG(LogElevenLabs, Log, TEXT("TTS completed. WAV bytes: %d, duration: %.2fs"), Result.WavBytes.Num(), Result.DurationSeconds);
	OnReceive.Broadcast(
		Result.WavBytes,
		/*bIsFinal*/ true,
		/*ChunkIndex*/ -1,
		Result.SampleRate,
		Result.NumChannels,
		Result.DurationSeconds);
	SetReadyToDestroy();
}

void UElevenLabsSynthesizeTextAsync::HandleError(const FString& Message)
{
	UE_LOG(LogElevenLabs, Error, TEXT("TTS request failed: %s"), *Message);
	OnError.Broadcast(Message);
	SetReadyToDestroy();
}
