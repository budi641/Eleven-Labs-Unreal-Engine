// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElevenLabsSynthesizeTextAsync.h"
#include "ElevenLabsTTSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeElevenLabsSynthesizeTextAsync() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ELEVENLABS_API UClass* Z_Construct_UClass_UElevenLabsSynthesizeTextAsync();
ELEVENLABS_API UClass* Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_NoRegister();
ELEVENLABS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature();
ELEVENLABS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature();
ELEVENLABS_API UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsTTSConfig();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_ElevenLabs();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FElevenLabsTTSEventDelegate *******************************************
struct Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics
{
	struct _Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms
	{
		TArray<uint8> WavBytes;
		bool bIsFinal;
		int32 ChunkIndex;
		int32 SampleRate;
		int32 NumChannels;
		float DurationSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FElevenLabsTTSEventDelegate constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_WavBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WavBytes;
	static void NewProp_bIsFinal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FElevenLabsTTSEventDelegate constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FElevenLabsTTSEventDelegate Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_WavBytes_Inner = { "WavBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_WavBytes = { "WavBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms, WavBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavBytes_MetaData), NewProp_WavBytes_MetaData) };
void Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_bIsFinal_SetBit(void* Obj)
{
	((_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms*)Obj)->bIsFinal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_bIsFinal = { "bIsFinal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms), &Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_bIsFinal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_ChunkIndex = { "ChunkIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms, ChunkIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms, NumChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms, DurationSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_WavBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_WavBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_bIsFinal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_ChunkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::NewProp_DurationSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FElevenLabsTTSEventDelegate Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ElevenLabs, nullptr, "ElevenLabsTTSEventDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FElevenLabsTTSEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElevenLabsTTSEventDelegate, TArray<uint8> const& WavBytes, bool bIsFinal, int32 ChunkIndex, int32 SampleRate, int32 NumChannels, float DurationSeconds)
{
	struct _Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms
	{
		TArray<uint8> WavBytes;
		bool bIsFinal;
		int32 ChunkIndex;
		int32 SampleRate;
		int32 NumChannels;
		float DurationSeconds;
	};
	_Script_ElevenLabs_eventElevenLabsTTSEventDelegate_Parms Parms;
	Parms.WavBytes=WavBytes;
	Parms.bIsFinal=bIsFinal ? true : false;
	Parms.ChunkIndex=ChunkIndex;
	Parms.SampleRate=SampleRate;
	Parms.NumChannels=NumChannels;
	Parms.DurationSeconds=DurationSeconds;
	ElevenLabsTTSEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FElevenLabsTTSEventDelegate *********************************************

// ********** Begin Delegate FElevenLabsTTSErrorDelegate *******************************************
struct Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics
{
	struct _Script_ElevenLabs_eventElevenLabsTTSErrorDelegate_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FElevenLabsTTSErrorDelegate constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FElevenLabsTTSErrorDelegate constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FElevenLabsTTSErrorDelegate Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsTTSErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FElevenLabsTTSErrorDelegate Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ElevenLabs, nullptr, "ElevenLabsTTSErrorDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsTTSErrorDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsTTSErrorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FElevenLabsTTSErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElevenLabsTTSErrorDelegate, const FString& ErrorMessage)
{
	struct _Script_ElevenLabs_eventElevenLabsTTSErrorDelegate_Parms
	{
		FString ErrorMessage;
	};
	_Script_ElevenLabs_eventElevenLabsTTSErrorDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	ElevenLabsTTSErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FElevenLabsTTSErrorDelegate *********************************************

// ********** Begin Class UElevenLabsSynthesizeTextAsync Function SynthesizeTextToWav **************
struct Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics
{
	struct ElevenLabsSynthesizeTextAsync_eventSynthesizeTextToWav_Parms
	{
		UObject* WorldContextObject;
		FString Text;
		FElevenLabsTTSConfig Config;
		UElevenLabsSynthesizeTextAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ElevenLabs|TTS" },
		{ "DisplayName", "ElevenLabs Synthesize Text To Wav" },
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SynthesizeTextToWav constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SynthesizeTextToWav constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SynthesizeTextToWav Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsSynthesizeTextAsync_eventSynthesizeTextToWav_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsSynthesizeTextAsync_eventSynthesizeTextToWav_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsSynthesizeTextAsync_eventSynthesizeTextToWav_Parms, Config), Z_Construct_UScriptStruct_FElevenLabsTTSConfig, METADATA_PARAMS(0, nullptr) }; // 43084731
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsSynthesizeTextAsync_eventSynthesizeTextToWav_Parms, ReturnValue), Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::PropPointers) < 2048);
// ********** End Function SynthesizeTextToWav Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UElevenLabsSynthesizeTextAsync, nullptr, "SynthesizeTextToWav", 	Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::ElevenLabsSynthesizeTextAsync_eventSynthesizeTextToWav_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::Function_MetaDataParams), Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::ElevenLabsSynthesizeTextAsync_eventSynthesizeTextToWav_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UElevenLabsSynthesizeTextAsync::execSynthesizeTextToWav)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FElevenLabsTTSConfig,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UElevenLabsSynthesizeTextAsync**)Z_Param__Result=UElevenLabsSynthesizeTextAsync::SynthesizeTextToWav(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_Config);
	P_NATIVE_END;
}
// ********** End Class UElevenLabsSynthesizeTextAsync Function SynthesizeTextToWav ****************

// ********** Begin Class UElevenLabsSynthesizeTextAsync *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync;
UClass* UElevenLabsSynthesizeTextAsync::GetPrivateStaticClass()
{
	using TClass = UElevenLabsSynthesizeTextAsync;
	if (!Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ElevenLabsSynthesizeTextAsync"),
			Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync.InnerSingleton,
			StaticRegisterNativesUElevenLabsSynthesizeTextAsync,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync.InnerSingleton;
}
UClass* Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_NoRegister()
{
	return UElevenLabsSynthesizeTextAsync::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ElevenLabsSynthesizeTextAsync.h" },
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceive_MetaData[] = {
		{ "Category", "ElevenLabs|TTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires for each progressive chunk and once more on completion (bIsFinal=true with the full assembled WAV). */" },
#endif
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires for each progressive chunk and once more on completion (bIsFinal=true with the full assembled WAV)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "Category", "ElevenLabs|TTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires when the request fails. */" },
#endif
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires when the request fails." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UElevenLabsSynthesizeTextAsync constinit property declarations ***********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceive;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UElevenLabsSynthesizeTextAsync constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SynthesizeTextToWav"), .Pointer = &UElevenLabsSynthesizeTextAsync::execSynthesizeTextToWav },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav, "SynthesizeTextToWav" }, // 2846836853
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElevenLabsSynthesizeTextAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics

// ********** Begin Class UElevenLabsSynthesizeTextAsync Property Definitions **********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnReceive = { "OnReceive", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSynthesizeTextAsync, OnReceive), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceive_MetaData), NewProp_OnReceive_MetaData) }; // 4157824091
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSynthesizeTextAsync, OnError), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsTTSErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 4255304004
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSynthesizeTextAsync, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnReceive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::PropPointers) < 2048);
// ********** End Class UElevenLabsSynthesizeTextAsync Property Definitions ************************
UObject* (*const Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ElevenLabs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::ClassParams = {
	&UElevenLabsSynthesizeTextAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::Class_MetaDataParams)
};
void UElevenLabsSynthesizeTextAsync::StaticRegisterNativesUElevenLabsSynthesizeTextAsync()
{
	UClass* Class = UElevenLabsSynthesizeTextAsync::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::Funcs));
}
UClass* Z_Construct_UClass_UElevenLabsSynthesizeTextAsync()
{
	if (!Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync.OuterSingleton, Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync.OuterSingleton;
}
UElevenLabsSynthesizeTextAsync::UElevenLabsSynthesizeTextAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UElevenLabsSynthesizeTextAsync);
UElevenLabsSynthesizeTextAsync::~UElevenLabsSynthesizeTextAsync() {}
// ********** End Class UElevenLabsSynthesizeTextAsync *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UElevenLabsSynthesizeTextAsync, UElevenLabsSynthesizeTextAsync::StaticClass, TEXT("UElevenLabsSynthesizeTextAsync"), &Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElevenLabsSynthesizeTextAsync), 4063868661U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_848531203{
	TEXT("/Script/ElevenLabs"),
	Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
