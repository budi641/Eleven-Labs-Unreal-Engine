// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ElevenLabsTTSTypes.h"

#ifdef ELEVENLABS_ElevenLabsTTSTypes_generated_h
#error "ElevenLabsTTSTypes.generated.h already included, missing '#pragma once' in ElevenLabsTTSTypes.h"
#endif
#define ELEVENLABS_ElevenLabsTTSTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FElevenLabsTTSConfig **********************************************
struct Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics;
#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics; \
	ELEVENLABS_API static class UScriptStruct* StaticStruct();


struct FElevenLabsTTSConfig;
// ********** End ScriptStruct FElevenLabsTTSConfig ************************************************

// ********** Begin ScriptStruct FElevenLabsAudioChunk *********************************************
struct Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics;
#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics; \
	ELEVENLABS_API static class UScriptStruct* StaticStruct();


struct FElevenLabsAudioChunk;
// ********** End ScriptStruct FElevenLabsAudioChunk ***********************************************

// ********** Begin ScriptStruct FElevenLabsTTSResult **********************************************
struct Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics;
#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics; \
	ELEVENLABS_API static class UScriptStruct* StaticStruct();


struct FElevenLabsTTSResult;
// ********** End ScriptStruct FElevenLabsTTSResult ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h

// ********** Begin Enum EElevenLabsChunkMode ******************************************************
#define FOREACH_ENUM_EELEVENLABSCHUNKMODE(op) \
	op(EElevenLabsChunkMode::Progressive) \
	op(EElevenLabsChunkMode::AssembleThenReturn) 

enum class EElevenLabsChunkMode : uint8;
template<> struct TIsUEnumClass<EElevenLabsChunkMode> { enum { Value = true }; };
template<> ELEVENLABS_NON_ATTRIBUTED_API UEnum* StaticEnum<EElevenLabsChunkMode>();
// ********** End Enum EElevenLabsChunkMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
