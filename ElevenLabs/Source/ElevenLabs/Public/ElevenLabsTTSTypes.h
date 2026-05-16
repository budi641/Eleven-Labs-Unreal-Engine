#pragma once

#include "CoreMinimal.h"
#include "ElevenLabsTTSTypes.generated.h"

UENUM(BlueprintType)
enum class EElevenLabsChunkMode : uint8
{
	Progressive UMETA(DisplayName = "Progressive"),
	AssembleThenReturn UMETA(DisplayName = "Assemble Then Return")
};

USTRUCT(BlueprintType)
struct FElevenLabsTTSConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	FString VoiceId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	FString ModelId = TEXT("eleven_multilingual_v2");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	FString LanguageCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	float Stability = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	float SimilarityBoost = 0.75f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	float Style = 0.35f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	bool bUseSpeakerBoost = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	float Speed = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	int32 SampleRate = 16000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs", meta = (ClampMin = "0", ClampMax = "4"))
	int32 LatencyOptimizationLevel = 4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	EElevenLabsChunkMode ChunkMode = EElevenLabsChunkMode::Progressive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	float RequestTimeoutSeconds = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	FString PreviousText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	FString NextText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	int32 Seed = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ElevenLabs")
	bool bEnableLogging = false;
};

USTRUCT(BlueprintType)
struct FElevenLabsAudioChunk
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "ElevenLabs")
	TArray<uint8> Data;

	UPROPERTY(BlueprintReadOnly, Category = "ElevenLabs")
	int32 ChunkIndex = 0;
};

USTRUCT(BlueprintType)
struct FElevenLabsTTSResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "ElevenLabs")
	TArray<uint8> WavBytes;

	UPROPERTY(BlueprintReadOnly, Category = "ElevenLabs")
	int32 SampleRate = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ElevenLabs")
	int32 NumChannels = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ElevenLabs")
	float DurationSeconds = 0.0f;
};
