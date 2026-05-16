#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ElevenLabsTTSTypes.h"
#include "ElevenLabsSynthesizeTextAsync.generated.h"

class FElevenLabsTTSService;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(
	FElevenLabsTTSEventDelegate,
	const TArray<uint8>&, WavBytes,
	bool, bIsFinal,
	int32, ChunkIndex,
	int32, SampleRate,
	int32, NumChannels,
	float, DurationSeconds);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElevenLabsTTSErrorDelegate, const FString&, ErrorMessage);

UCLASS()
class ELEVENLABS_API UElevenLabsSynthesizeTextAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "ElevenLabs Synthesize Text To Wav"), Category = "ElevenLabs|TTS")
	static UElevenLabsSynthesizeTextAsync* SynthesizeTextToWav(UObject* WorldContextObject, const FString& Text, FElevenLabsTTSConfig Config);

	virtual void Activate() override;
	virtual void SetReadyToDestroy() override;

	/** Fires for each progressive chunk and once more on completion (bIsFinal=true with the full assembled WAV). */
	UPROPERTY(BlueprintAssignable, Category = "ElevenLabs|TTS")
	FElevenLabsTTSEventDelegate OnReceive;

	/** Fires when the request fails. */
	UPROPERTY(BlueprintAssignable, Category = "ElevenLabs|TTS")
	FElevenLabsTTSErrorDelegate OnError;

private:
	void HandleChunk(const FElevenLabsAudioChunk& Chunk);
	void HandleCompleted(const FElevenLabsTTSResult& Result);
	void HandleError(const FString& Message);

private:
	UPROPERTY()
	TObjectPtr<UObject> WorldContextObject;

	FString PendingText;
	FElevenLabsTTSConfig PendingConfig;
	TSharedPtr<FElevenLabsTTSService> Service;
};
