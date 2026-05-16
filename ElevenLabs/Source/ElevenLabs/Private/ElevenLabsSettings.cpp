#include "ElevenLabsSettings.h"

UElevenLabsSettings::UElevenLabsSettings()
{
	DefaultTimeoutSeconds = 30.0f;
}

FName UElevenLabsSettings::GetCategoryName() const
{
	return TEXT("Plugins");
}
