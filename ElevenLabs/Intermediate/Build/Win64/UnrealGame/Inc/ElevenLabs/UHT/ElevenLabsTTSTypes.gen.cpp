// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElevenLabsTTSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeElevenLabsTTSTypes() {}

// ********** Begin Cross Module References ********************************************************
ELEVENLABS_API UEnum* Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode();
ELEVENLABS_API UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsAudioChunk();
ELEVENLABS_API UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsTTSConfig();
ELEVENLABS_API UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsTTSResult();
UPackage* Z_Construct_UPackage__Script_ElevenLabs();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EElevenLabsChunkMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EElevenLabsChunkMode;
static UEnum* EElevenLabsChunkMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EElevenLabsChunkMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EElevenLabsChunkMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode, (UObject*)Z_Construct_UPackage__Script_ElevenLabs(), TEXT("EElevenLabsChunkMode"));
	}
	return Z_Registration_Info_UEnum_EElevenLabsChunkMode.OuterSingleton;
}
template<> ELEVENLABS_NON_ATTRIBUTED_API UEnum* StaticEnum<EElevenLabsChunkMode>()
{
	return EElevenLabsChunkMode_StaticEnum();
}
struct Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AssembleThenReturn.DisplayName", "Assemble Then Return" },
		{ "AssembleThenReturn.Name", "EElevenLabsChunkMode::AssembleThenReturn" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
		{ "Progressive.DisplayName", "Progressive" },
		{ "Progressive.Name", "EElevenLabsChunkMode::Progressive" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EElevenLabsChunkMode::Progressive", (int64)EElevenLabsChunkMode::Progressive },
		{ "EElevenLabsChunkMode::AssembleThenReturn", (int64)EElevenLabsChunkMode::AssembleThenReturn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElevenLabs,
	nullptr,
	"EElevenLabsChunkMode",
	"EElevenLabsChunkMode",
	Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode()
{
	if (!Z_Registration_Info_UEnum_EElevenLabsChunkMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EElevenLabsChunkMode.InnerSingleton, Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EElevenLabsChunkMode.InnerSingleton;
}
// ********** End Enum EElevenLabsChunkMode ********************************************************

// ********** Begin ScriptStruct FElevenLabsTTSConfig **********************************************
struct Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FElevenLabsTTSConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FElevenLabsTTSConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceId_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelId_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanguageCode_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stability_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimilarityBoost_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpeakerBoost_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatencyOptimizationLevel_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkMode_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestTimeoutSeconds_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousText_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextText_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogging_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FElevenLabsTTSConfig constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LanguageCode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimilarityBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Style;
	static void NewProp_bUseSpeakerBoost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpeakerBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LatencyOptimizationLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChunkMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChunkMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestTimeoutSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviousText;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NextText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_bEnableLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FElevenLabsTTSConfig constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElevenLabsTTSConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FElevenLabsTTSConfig;
class UScriptStruct* FElevenLabsTTSConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FElevenLabsTTSConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FElevenLabsTTSConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FElevenLabsTTSConfig, (UObject*)Z_Construct_UPackage__Script_ElevenLabs(), TEXT("ElevenLabsTTSConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FElevenLabsTTSConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FElevenLabsTTSConfig Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_VoiceId = { "VoiceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, VoiceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceId_MetaData), NewProp_VoiceId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_ModelId = { "ModelId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, ModelId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelId_MetaData), NewProp_ModelId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_LanguageCode = { "LanguageCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, LanguageCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanguageCode_MetaData), NewProp_LanguageCode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_Stability = { "Stability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, Stability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stability_MetaData), NewProp_Stability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_SimilarityBoost = { "SimilarityBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, SimilarityBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimilarityBoost_MetaData), NewProp_SimilarityBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, Style), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) };
void Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_bUseSpeakerBoost_SetBit(void* Obj)
{
	((FElevenLabsTTSConfig*)Obj)->bUseSpeakerBoost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_bUseSpeakerBoost = { "bUseSpeakerBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FElevenLabsTTSConfig), &Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_bUseSpeakerBoost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpeakerBoost_MetaData), NewProp_bUseSpeakerBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_LatencyOptimizationLevel = { "LatencyOptimizationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, LatencyOptimizationLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatencyOptimizationLevel_MetaData), NewProp_LatencyOptimizationLevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_ChunkMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_ChunkMode = { "ChunkMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, ChunkMode), Z_Construct_UEnum_ElevenLabs_EElevenLabsChunkMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkMode_MetaData), NewProp_ChunkMode_MetaData) }; // 2435887943
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_RequestTimeoutSeconds = { "RequestTimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, RequestTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestTimeoutSeconds_MetaData), NewProp_RequestTimeoutSeconds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_PreviousText = { "PreviousText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, PreviousText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousText_MetaData), NewProp_PreviousText_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_NextText = { "NextText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, NextText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextText_MetaData), NewProp_NextText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSConfig, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_bEnableLogging_SetBit(void* Obj)
{
	((FElevenLabsTTSConfig*)Obj)->bEnableLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_bEnableLogging = { "bEnableLogging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FElevenLabsTTSConfig), &Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_bEnableLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLogging_MetaData), NewProp_bEnableLogging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_VoiceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_ModelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_LanguageCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_Stability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_SimilarityBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_bUseSpeakerBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_LatencyOptimizationLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_ChunkMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_ChunkMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_RequestTimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_PreviousText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_NextText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewProp_bEnableLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FElevenLabsTTSConfig Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ElevenLabs,
	nullptr,
	&NewStructOps,
	"ElevenLabsTTSConfig",
	Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::PropPointers),
	sizeof(FElevenLabsTTSConfig),
	alignof(FElevenLabsTTSConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsTTSConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FElevenLabsTTSConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FElevenLabsTTSConfig.InnerSingleton, Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FElevenLabsTTSConfig.InnerSingleton);
}
// ********** End ScriptStruct FElevenLabsTTSConfig ************************************************

// ********** Begin ScriptStruct FElevenLabsAudioChunk *********************************************
struct Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FElevenLabsAudioChunk); }
	static inline consteval int16 GetStructAlignment() { return alignof(FElevenLabsAudioChunk); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkIndex_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FElevenLabsAudioChunk constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FElevenLabsAudioChunk constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElevenLabsAudioChunk>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FElevenLabsAudioChunk;
class UScriptStruct* FElevenLabsAudioChunk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FElevenLabsAudioChunk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FElevenLabsAudioChunk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FElevenLabsAudioChunk, (UObject*)Z_Construct_UPackage__Script_ElevenLabs(), TEXT("ElevenLabsAudioChunk"));
	}
	return Z_Registration_Info_UScriptStruct_FElevenLabsAudioChunk.OuterSingleton;
	}

// ********** Begin ScriptStruct FElevenLabsAudioChunk Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsAudioChunk, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::NewProp_ChunkIndex = { "ChunkIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsAudioChunk, ChunkIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkIndex_MetaData), NewProp_ChunkIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::NewProp_ChunkIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FElevenLabsAudioChunk Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ElevenLabs,
	nullptr,
	&NewStructOps,
	"ElevenLabsAudioChunk",
	Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::PropPointers),
	sizeof(FElevenLabsAudioChunk),
	alignof(FElevenLabsAudioChunk),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsAudioChunk()
{
	if (!Z_Registration_Info_UScriptStruct_FElevenLabsAudioChunk.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FElevenLabsAudioChunk.InnerSingleton, Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FElevenLabsAudioChunk.InnerSingleton);
}
// ********** End ScriptStruct FElevenLabsAudioChunk ***********************************************

// ********** Begin ScriptStruct FElevenLabsTTSResult **********************************************
struct Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FElevenLabsTTSResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FElevenLabsTTSResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavBytes_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "ElevenLabs" },
		{ "ModuleRelativePath", "Public/ElevenLabsTTSTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FElevenLabsTTSResult constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WavBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WavBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FElevenLabsTTSResult constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElevenLabsTTSResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FElevenLabsTTSResult;
class UScriptStruct* FElevenLabsTTSResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FElevenLabsTTSResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FElevenLabsTTSResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FElevenLabsTTSResult, (UObject*)Z_Construct_UPackage__Script_ElevenLabs(), TEXT("ElevenLabsTTSResult"));
	}
	return Z_Registration_Info_UScriptStruct_FElevenLabsTTSResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FElevenLabsTTSResult Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_WavBytes_Inner = { "WavBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_WavBytes = { "WavBytes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSResult, WavBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavBytes_MetaData), NewProp_WavBytes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSResult, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSResult, NumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChannels_MetaData), NewProp_NumChannels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FElevenLabsTTSResult, DurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationSeconds_MetaData), NewProp_DurationSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_WavBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_WavBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewProp_DurationSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FElevenLabsTTSResult Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ElevenLabs,
	nullptr,
	&NewStructOps,
	"ElevenLabsTTSResult",
	Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::PropPointers),
	sizeof(FElevenLabsTTSResult),
	alignof(FElevenLabsTTSResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsTTSResult()
{
	if (!Z_Registration_Info_UScriptStruct_FElevenLabsTTSResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FElevenLabsTTSResult.InnerSingleton, Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FElevenLabsTTSResult.InnerSingleton);
}
// ********** End ScriptStruct FElevenLabsTTSResult ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h__Script_ElevenLabs_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EElevenLabsChunkMode_StaticEnum, TEXT("EElevenLabsChunkMode"), &Z_Registration_Info_UEnum_EElevenLabsChunkMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2435887943U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FElevenLabsTTSConfig::StaticStruct, Z_Construct_UScriptStruct_FElevenLabsTTSConfig_Statics::NewStructOps, TEXT("ElevenLabsTTSConfig"),&Z_Registration_Info_UScriptStruct_FElevenLabsTTSConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FElevenLabsTTSConfig), 43084731U) },
		{ FElevenLabsAudioChunk::StaticStruct, Z_Construct_UScriptStruct_FElevenLabsAudioChunk_Statics::NewStructOps, TEXT("ElevenLabsAudioChunk"),&Z_Registration_Info_UScriptStruct_FElevenLabsAudioChunk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FElevenLabsAudioChunk), 1857999776U) },
		{ FElevenLabsTTSResult::StaticStruct, Z_Construct_UScriptStruct_FElevenLabsTTSResult_Statics::NewStructOps, TEXT("ElevenLabsTTSResult"),&Z_Registration_Info_UScriptStruct_FElevenLabsTTSResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FElevenLabsTTSResult), 4094280668U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h__Script_ElevenLabs_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h__Script_ElevenLabs_1650414364{
	TEXT("/Script/ElevenLabs"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h__Script_ElevenLabs_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h__Script_ElevenLabs_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h__Script_ElevenLabs_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsTTSTypes_h__Script_ElevenLabs_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
