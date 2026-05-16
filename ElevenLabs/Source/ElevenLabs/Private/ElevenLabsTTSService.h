#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "ElevenLabsTTSTypes.h"

DECLARE_DELEGATE_OneParam(FElevenLabsOnChunkNative, const FElevenLabsAudioChunk&);
DECLARE_DELEGATE_OneParam(FElevenLabsOnCompletedNative, const FElevenLabsTTSResult&);
DECLARE_DELEGATE_OneParam(FElevenLabsOnErrorNative, const FString&);

class FElevenLabsTTSService : public TSharedFromThis<FElevenLabsTTSService>
{
public:
	void Synthesize(
		const FString& Text,
		const FElevenLabsTTSConfig& Config,
		const FElevenLabsOnChunkNative& OnChunk,
		const FElevenLabsOnCompletedNative& OnCompleted,
		const FElevenLabsOnErrorNative& OnError);

private:
	void HandleRequestProgress(FHttpRequestPtr Request, uint64 BytesSent, uint64 BytesReceived);
	void HandleRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
	void Fail(const FString& Message);
	void CompleteFromPcm(const TArray<uint8>& PcmBytes);
	FString BuildJsonPayload(const FString& Text, const FElevenLabsTTSConfig& Config) const;
	FString ResolveApiKey() const;

private:
	FElevenLabsTTSConfig ActiveConfig;
	FElevenLabsOnChunkNative ChunkCallback;
	FElevenLabsOnCompletedNative CompletedCallback;
	FElevenLabsOnErrorNative ErrorCallback;
	TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> ActiveRequest;

	TArray<uint8> AccumulatedPcm;
	TArray<uint8> PcmRemainder;
	int32 LastStreamedByteCount = 0;
	int32 ChunkCounter = 0;
};
