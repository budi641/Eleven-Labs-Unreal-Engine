#include "ElevenLabsAudioLibrary.h"

#include "Audio.h"
#include "ElevenLabsLog.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Guid.h"
#include "Misc/Paths.h"
#include "Sound/SoundWave.h"
#include "Sound/SoundWaveProcedural.h"

USoundWave* UElevenLabsAudioLibrary::CreateSoundWaveFromWav(const TArray<uint8>& WavBytes)
{
	if (WavBytes.Num() < 44)
	{
		UE_LOG(LogElevenLabs, Warning, TEXT("CreateSoundWaveFromWav failed: input WAV buffer is too small."));
		return nullptr;
	}

	FWaveModInfo WaveInfo;
	if (!WaveInfo.ReadWaveInfo(WavBytes.GetData(), WavBytes.Num()))
	{
		UE_LOG(LogElevenLabs, Warning, TEXT("CreateSoundWaveFromWav failed: invalid WAV header."));
		return nullptr;
	}

	const uint32 SampleRate = WaveInfo.pSamplesPerSec ? *WaveInfo.pSamplesPerSec : 0;
	const uint16 NumChannels = WaveInfo.pChannels ? *WaveInfo.pChannels : 0;
	const uint16 BitsPerSample = WaveInfo.pBitsPerSample ? *WaveInfo.pBitsPerSample : 0;
	if (SampleRate == 0 || NumChannels == 0 || BitsPerSample == 0 || WaveInfo.SampleDataSize == 0)
	{
		UE_LOG(LogElevenLabs, Warning, TEXT("CreateSoundWaveFromWav failed: WAV metadata invalid."));
		return nullptr;
	}

	if (BitsPerSample != 16)
	{
		UE_LOG(LogElevenLabs, Warning, TEXT("CreateSoundWaveFromWav: only 16-bit PCM WAV is supported for ACE/runtime decode (got %d bits)."), BitsPerSample);
		return nullptr;
	}

	USoundWaveProcedural* SoundWave = NewObject<USoundWaveProcedural>(GetTransientPackage(), USoundWaveProcedural::StaticClass());
	if (!SoundWave)
	{
		UE_LOG(LogElevenLabs, Error, TEXT("CreateSoundWaveFromWav failed: could not allocate USoundWave."));
		return nullptr;
	}

	SoundWave->bLooping = false;
	SoundWave->NumChannels = NumChannels;
	SoundWave->SetSampleRate(SampleRate);
	SoundWave->SampleByteSize = FMath::Max<int32>(1, BitsPerSample / 8);
	SoundWave->QueueAudio(WaveInfo.SampleDataStart, WaveInfo.SampleDataSize);

	const float BytesPerSecond = static_cast<float>(SampleRate * NumChannels * (BitsPerSample / 8));
	SoundWave->Duration = BytesPerSecond > 0.0f ? static_cast<float>(WaveInfo.SampleDataSize) / BytesPerSecond : 0.0f;
	SoundWave->SoundGroup = ESoundGroup::SOUNDGROUP_Voice;

	SoundWave->RawPCMDataSize = WaveInfo.SampleDataSize;
	SoundWave->RawPCMData = static_cast<uint8*>(FMemory::Malloc(WaveInfo.SampleDataSize));
	FMemory::Memcpy(SoundWave->RawPCMData, WaveInfo.SampleDataStart, WaveInfo.SampleDataSize);

	UE_LOG(LogElevenLabs, Verbose, TEXT("Created runtime USoundWaveProcedural. SR=%d, Channels=%d, Duration=%.2fs"),
		SampleRate,
		NumChannels,
		SoundWave->Duration);
	return SoundWave;
}

FString UElevenLabsAudioLibrary::SaveWavBytesToTempFile(const TArray<uint8>& WavBytes, const FString& FilePrefix)
{
	if (WavBytes.Num() < 44)
	{
		UE_LOG(LogElevenLabs, Warning, TEXT("SaveWavBytesToTempFile failed: input WAV buffer is too small."));
		return FString();
	}

	const FString SafePrefix = FilePrefix.IsEmpty() ? TEXT("elevenlabs_tts") : FilePrefix;
	const FString FileName = FString::Printf(TEXT("%s_%s.wav"), *SafePrefix, *FGuid::NewGuid().ToString(EGuidFormats::Digits));
	const FString Directory = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("ElevenLabs"));
	IFileManager::Get().MakeDirectory(*Directory, true);

	const FString FullPath = FPaths::Combine(Directory, FileName);
	if (!FFileHelper::SaveArrayToFile(WavBytes, *FullPath))
	{
		UE_LOG(LogElevenLabs, Error, TEXT("SaveWavBytesToTempFile failed: could not write %s"), *FullPath);
		return FString();
	}

	UE_LOG(LogElevenLabs, Verbose, TEXT("Saved WAV bytes to %s"), *FullPath);
	return FullPath;
}
