#include "ElevenLabsWavBuilder.h"

namespace ElevenLabsWav
{
	static void WriteUint32(TArray<uint8>& Buffer, uint32 Value)
	{
		Buffer.Add(static_cast<uint8>(Value & 0xFF));
		Buffer.Add(static_cast<uint8>((Value >> 8) & 0xFF));
		Buffer.Add(static_cast<uint8>((Value >> 16) & 0xFF));
		Buffer.Add(static_cast<uint8>((Value >> 24) & 0xFF));
	}

	static void WriteUint16(TArray<uint8>& Buffer, uint16 Value)
	{
		Buffer.Add(static_cast<uint8>(Value & 0xFF));
		Buffer.Add(static_cast<uint8>((Value >> 8) & 0xFF));
	}
}

bool FElevenLabsWavBuilder::BuildFromPcm16(const TArray<uint8>& PcmBytes, int32 SampleRate, int32 NumChannels, TArray<uint8>& OutWavBytes, FElevenLabsWavInfo& OutInfo)
{
	if (SampleRate <= 0 || NumChannels <= 0)
	{
		return false;
	}

	const uint32 DataSize = static_cast<uint32>(PcmBytes.Num());
	const uint32 ByteRate = static_cast<uint32>(SampleRate * NumChannels * sizeof(int16));
	const uint16 BlockAlign = static_cast<uint16>(NumChannels * sizeof(int16));
	const uint32 ChunkSize = 36 + DataSize;

	OutWavBytes.Reset();
	OutWavBytes.Reserve(44 + PcmBytes.Num());

	OutWavBytes.Append(reinterpret_cast<const uint8*>("RIFF"), 4);
	ElevenLabsWav::WriteUint32(OutWavBytes, ChunkSize);
	OutWavBytes.Append(reinterpret_cast<const uint8*>("WAVE"), 4);
	OutWavBytes.Append(reinterpret_cast<const uint8*>("fmt "), 4);
	ElevenLabsWav::WriteUint32(OutWavBytes, 16);
	ElevenLabsWav::WriteUint16(OutWavBytes, 1);
	ElevenLabsWav::WriteUint16(OutWavBytes, static_cast<uint16>(NumChannels));
	ElevenLabsWav::WriteUint32(OutWavBytes, static_cast<uint32>(SampleRate));
	ElevenLabsWav::WriteUint32(OutWavBytes, ByteRate);
	ElevenLabsWav::WriteUint16(OutWavBytes, BlockAlign);
	ElevenLabsWav::WriteUint16(OutWavBytes, 16);
	OutWavBytes.Append(reinterpret_cast<const uint8*>("data"), 4);
	ElevenLabsWav::WriteUint32(OutWavBytes, DataSize);
	OutWavBytes.Append(PcmBytes);

	OutInfo.SampleRate = SampleRate;
	OutInfo.NumChannels = NumChannels;
	OutInfo.DurationSeconds = (DataSize > 0 && ByteRate > 0) ? static_cast<float>(DataSize) / static_cast<float>(ByteRate) : 0.0f;
	return true;
}
