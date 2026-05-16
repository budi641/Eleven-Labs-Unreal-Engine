#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ElevenLabsSettings.generated.h"

UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Eleven Labs"))
class ELEVENLABS_API UElevenLabsSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UElevenLabsSettings();

	virtual FName GetCategoryName() const override;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Authentication", meta = (DisplayName = "API Key"))
	FString ApiKey;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Runtime", meta = (ClampMin = "5.0", ClampMax = "120.0"))
	float DefaultTimeoutSeconds;
};
