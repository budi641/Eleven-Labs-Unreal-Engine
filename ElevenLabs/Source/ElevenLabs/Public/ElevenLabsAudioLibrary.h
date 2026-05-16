#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ElevenLabsAudioLibrary.generated.h"

class USoundWave;

UCLASS()
class ELEVENLABS_API UElevenLabsAudioLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "ElevenLabs|Audio")
	static USoundWave* CreateSoundWaveFromWav(const TArray<uint8>& WavBytes);

	UFUNCTION(BlueprintCallable, Category = "ElevenLabs|Audio")
	static FString SaveWavBytesToTempFile(const TArray<uint8>& WavBytes, const FString& FilePrefix = TEXT("elevenlabs_tts"));
};
