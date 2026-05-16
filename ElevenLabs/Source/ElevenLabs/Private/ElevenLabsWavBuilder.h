#pragma once

#include "CoreMinimal.h"

struct FElevenLabsWavInfo
{
	int32 SampleRate = 0;
	int32 NumChannels = 1;
	float DurationSeconds = 0.0f;
};

class FElevenLabsWavBuilder
{
public:
	static bool BuildFromPcm16(const TArray<uint8>& PcmBytes, int32 SampleRate, int32 NumChannels, TArray<uint8>& OutWavBytes, FElevenLabsWavInfo& OutInfo);
};
