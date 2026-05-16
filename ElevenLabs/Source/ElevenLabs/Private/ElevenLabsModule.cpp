#include "ElevenLabsModule.h"
#include "ElevenLabsLog.h"

#define LOCTEXT_NAMESPACE "FElevenLabsModule"

void FElevenLabsModule::StartupModule()
{
	UE_LOG(LogElevenLabs, Log, TEXT("Eleven Labs plugin module started."));
}

void FElevenLabsModule::ShutdownModule()
{
	UE_LOG(LogElevenLabs, Log, TEXT("Eleven Labs plugin module shutdown."));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FElevenLabsModule, ElevenLabs)
