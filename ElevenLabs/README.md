# Eleven Labs Unreal Plugin

Runtime ElevenLabs integration for Unreal Engine (UE 5.7 target, designed to stay UE5-minor compatible).

This plugin currently implements Text-to-Speech (TTS) with chunked streaming and WAV output, and is structured to expand into additional ElevenLabs features (for example Speech-to-Text) later.

## What this plugin provides

- Project settings for API key configuration.
- Async runtime TTS call from Blueprint and C++.
- Rich per-request configuration (`FElevenLabsTTSConfig`).
- Two chunk behavior modes:
  - `Progressive` (emit chunk callbacks during download)
  - `AssembleThenReturn` (deliver final WAV at completion)
- WAV-to-`USoundWave` helper for runtime playback.
- Built-in plugin logging category: `LogElevenLabs`.

## Installation and enabling

1. Ensure plugin folder exists at `Plugins/ElevenLabs`.
2. Ensure your `.uproject` has the plugin enabled:
   - `"Name": "ElevenLabs", "Enabled": true`
3. Regenerate project files (if needed) and build your project.

## Setup

Open:

- `Edit -> Project Settings -> Plugins -> Eleven Labs`

Configure:

- `API Key`: your ElevenLabs API key.
- `Default Timeout Seconds`: fallback request timeout for TTS calls.

Also stored in `Config/DefaultGame.ini`:

```ini
[/Script/ElevenLabs.ElevenLabsSettings]
ApiKey=
DefaultTimeoutSeconds=30.000000
```

## Public API reference

### 1) Async TTS entry point

`UElevenLabsSynthesizeTextAsync::SynthesizeTextToWav(WorldContextObject, Text, Config)`

- Blueprint node display name: `ElevenLabs Synthesize Text To Wav`
- Category: `ElevenLabs|TTS`
- Outputs:
  - `OnChunk(FElevenLabsAudioChunk)`
  - `OnCompleted(WavBytes, SampleRate, NumChannels, DurationSeconds)`
  - `OnError(FString)`

### 2) Audio helper

`UElevenLabsAudioLibrary::CreateSoundWaveFromWav(WavBytes)`

- Category: `ElevenLabs|Audio`
- Returns: `USoundWave*` (or `nullptr` if invalid WAV).

### 3) Data structures

#### `FElevenLabsTTSConfig`

- `VoiceId` (required)
- `ModelId` (default: `eleven_multilingual_v2`)
- `LanguageCode`
- `Stability`
- `SimilarityBoost`
- `Style`
- `bUseSpeakerBoost`
- `Speed`
- `SampleRate` (default: `22050`)
- `LatencyOptimizationLevel` (`0..4`)
- `ChunkMode` (`Progressive` or `AssembleThenReturn`)
- `RequestTimeoutSeconds`
- `PreviousText`
- `NextText`
- `Seed` (`-1` = unset)
- `bEnableLogging`

#### `FElevenLabsAudioChunk`

- `Data`: raw chunk bytes
- `ChunkIndex`: zero-based order index

#### `FElevenLabsTTSResult`

- `WavBytes`: complete WAV payload
- `SampleRate`
- `NumChannels`
- `DurationSeconds`

## Blueprint usage

Recommended baseline flow:

1. Create `Make Eleven Labs TTSConfig`
2. Set at minimum:
   - `VoiceId`
   - desired model/voice settings
3. Call `ElevenLabs Synthesize Text To Wav`
4. Use:
   - `OnCompleted -> WavBytes -> Create Sound Wave from Wav -> Play`
   - `OnError` for failures

Important note:

- `OnChunk.Data` is a progressive chunk payload intended for low-latency handling.
- For reliable one-shot playback with `CreateSoundWaveFromWav`, use `OnCompleted.WavBytes`.

## C++ usage

Add dependency in your game module `.Build.cs`:

```csharp
PublicDependencyModuleNames.AddRange(new[]
{
    "Core",
    "CoreUObject",
    "Engine",
    "ElevenLabs"
});
```

Example usage from an actor/component:

```cpp
#include "ElevenLabsSynthesizeTextAsync.h"
#include "ElevenLabsAudioLibrary.h"
#include "ElevenLabsTTSTypes.h"

void UMyVoiceComponent::RequestSpeech(const FString& Text)
{
    FElevenLabsTTSConfig Config;
    Config.VoiceId = TEXT("your_voice_id");
    Config.ModelId = TEXT("eleven_multilingual_v2");
    Config.ChunkMode = EElevenLabsChunkMode::AssembleThenReturn;

    UElevenLabsSynthesizeTextAsync* Node =
        UElevenLabsSynthesizeTextAsync::SynthesizeTextToWav(this, Text, Config);

    Node->OnCompleted.AddDynamic(this, &UMyVoiceComponent::HandleTtsCompleted);
    Node->OnError.AddDynamic(this, &UMyVoiceComponent::HandleTtsError);
}

void UMyVoiceComponent::HandleTtsCompleted(const TArray<uint8>& WavBytes, int32 SampleRate, int32 NumChannels, float DurationSeconds)
{
    if (USoundWave* Wave = UElevenLabsAudioLibrary::CreateSoundWaveFromWav(WavBytes))
    {
        // Play with your AudioComponent here
    }
}

void UMyVoiceComponent::HandleTtsError(const FString& ErrorMessage)
{
    UE_LOG(LogTemp, Error, TEXT("TTS failed: %s"), *ErrorMessage);
}
```

## Logging and debugging

Plugin logs use category:

- `LogElevenLabs`

Common useful log levels:

- `Log` for request lifecycle and completion
- `Verbose` for extra request and audio details
- `VeryVerbose` for chunk-level events
- `Error` for failures

## Troubleshooting

- `Text cannot be empty`:
  - Provide non-empty `Text`.
- `VoiceId is required`:
  - Set `Config.VoiceId`.
- Missing API key:
  - Set `Project Settings -> Plugins -> Eleven Labs -> API Key`.
- HTTP failure / timeout:
  - Increase `RequestTimeoutSeconds` or `DefaultTimeoutSeconds`.
  - Check network access and key validity.
- `CreateSoundWaveFromWav` returns null:
  - Ensure input is final WAV (`WavBytes` from `OnCompleted`).

## Official ElevenLabs documentation

- API introduction: [https://elevenlabs.io/docs/api-reference/introduction](https://elevenlabs.io/docs/api-reference/introduction)
- TTS stream endpoint: [https://elevenlabs.io/docs/api-reference/text-to-speech/stream](https://elevenlabs.io/docs/api-reference/text-to-speech/stream)
- TTS convert endpoint: [https://elevenlabs.io/docs/api-reference/text-to-speech/convert](https://elevenlabs.io/docs/api-reference/text-to-speech/convert)
- ElevenAPI quickstart: [https://elevenlabs.io/docs/eleven-api/quickstart](https://elevenlabs.io/docs/eleven-api/quickstart)
- API pricing: [https://elevenlabs.io/pricing/api](https://elevenlabs.io/pricing/api)

