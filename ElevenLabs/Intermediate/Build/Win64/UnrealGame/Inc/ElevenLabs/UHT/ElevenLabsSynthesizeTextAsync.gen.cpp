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
ELEVENLABS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature();
ELEVENLABS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature();
ELEVENLABS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature();
ELEVENLABS_API UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsAudioChunk();
ELEVENLABS_API UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsTTSConfig();
ELEVENLABS_API UScriptStruct* Z_Construct_UScriptStruct_FElevenLabsTTSResult();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_ElevenLabs();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FElevenLabsChunkDelegate **********************************************
struct Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics
{
	struct _Script_ElevenLabs_eventElevenLabsChunkDelegate_Parms
	{
		FElevenLabsAudioChunk Chunk;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chunk_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FElevenLabsChunkDelegate constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Chunk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FElevenLabsChunkDelegate constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FElevenLabsChunkDelegate Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::NewProp_Chunk = { "Chunk", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsChunkDelegate_Parms, Chunk), Z_Construct_UScriptStruct_FElevenLabsAudioChunk, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chunk_MetaData), NewProp_Chunk_MetaData) }; // 1857999776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::NewProp_Chunk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FElevenLabsChunkDelegate Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ElevenLabs, nullptr, "ElevenLabsChunkDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsChunkDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsChunkDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FElevenLabsChunkDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElevenLabsChunkDelegate, FElevenLabsAudioChunk const& Chunk)
{
	struct _Script_ElevenLabs_eventElevenLabsChunkDelegate_Parms
	{
		FElevenLabsAudioChunk Chunk;
	};
	_Script_ElevenLabs_eventElevenLabsChunkDelegate_Parms Parms;
	Parms.Chunk=Chunk;
	ElevenLabsChunkDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FElevenLabsChunkDelegate ************************************************

// ********** Begin Delegate FElevenLabsCompletedDelegate ******************************************
struct Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics
{
	struct _Script_ElevenLabs_eventElevenLabsCompletedDelegate_Parms
	{
		FElevenLabsTTSResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FElevenLabsCompletedDelegate constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FElevenLabsCompletedDelegate constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FElevenLabsCompletedDelegate Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsCompletedDelegate_Parms, Result), Z_Construct_UScriptStruct_FElevenLabsTTSResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 4094280668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FElevenLabsCompletedDelegate Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ElevenLabs, nullptr, "ElevenLabsCompletedDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsCompletedDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsCompletedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FElevenLabsCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElevenLabsCompletedDelegate, FElevenLabsTTSResult const& Result)
{
	struct _Script_ElevenLabs_eventElevenLabsCompletedDelegate_Parms
	{
		FElevenLabsTTSResult Result;
	};
	_Script_ElevenLabs_eventElevenLabsCompletedDelegate_Parms Parms;
	Parms.Result=Result;
	ElevenLabsCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FElevenLabsCompletedDelegate ********************************************

// ********** Begin Delegate FElevenLabsErrorDelegate **********************************************
struct Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics
{
	struct _Script_ElevenLabs_eventElevenLabsErrorDelegate_Parms
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

// ********** Begin Delegate FElevenLabsErrorDelegate constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FElevenLabsErrorDelegate constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FElevenLabsErrorDelegate Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_eventElevenLabsErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FElevenLabsErrorDelegate Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ElevenLabs, nullptr, "ElevenLabsErrorDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsErrorDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::_Script_ElevenLabs_eventElevenLabsErrorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FElevenLabsErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElevenLabsErrorDelegate, const FString& ErrorMessage)
{
	struct _Script_ElevenLabs_eventElevenLabsErrorDelegate_Parms
	{
		FString ErrorMessage;
	};
	_Script_ElevenLabs_eventElevenLabsErrorDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	ElevenLabsErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FElevenLabsErrorDelegate ************************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsSynthesizeTextAsync_eventSynthesizeTextToWav_Parms, Config), Z_Construct_UScriptStruct_FElevenLabsTTSConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 43084731
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
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::Function_MetaDataParams), Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav_Statics::Function_MetaDataParams)},  };
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
	P_GET_STRUCT_REF(FElevenLabsTTSConfig,Z_Param_Out_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UElevenLabsSynthesizeTextAsync**)Z_Param__Result=UElevenLabsSynthesizeTextAsync::SynthesizeTextToWav(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_Out_Config);
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChunk_MetaData[] = {
		{ "Category", "ElevenLabs|TTS" },
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "Category", "ElevenLabs|TTS" },
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "Category", "ElevenLabs|TTS" },
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsSynthesizeTextAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UElevenLabsSynthesizeTextAsync constinit property declarations ***********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunk;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UElevenLabsSynthesizeTextAsync constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SynthesizeTextToWav"), .Pointer = &UElevenLabsSynthesizeTextAsync::execSynthesizeTextToWav },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UElevenLabsSynthesizeTextAsync_SynthesizeTextToWav, "SynthesizeTextToWav" }, // 2505150838
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElevenLabsSynthesizeTextAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics

// ********** Begin Class UElevenLabsSynthesizeTextAsync Property Definitions **********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnChunk = { "OnChunk", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSynthesizeTextAsync, OnChunk), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChunk_MetaData), NewProp_OnChunk_MetaData) }; // 3937455926
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSynthesizeTextAsync, OnCompleted), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 2451042903
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSynthesizeTextAsync, OnError), Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 2772408128
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSynthesizeTextAsync, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnChunk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics::NewProp_OnCompleted,
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
		{ Z_Construct_UClass_UElevenLabsSynthesizeTextAsync, UElevenLabsSynthesizeTextAsync::StaticClass, TEXT("UElevenLabsSynthesizeTextAsync"), &Z_Registration_Info_UClass_UElevenLabsSynthesizeTextAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElevenLabsSynthesizeTextAsync), 4211325134U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_2096640295{
	TEXT("/Script/ElevenLabs"),
	Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h__Script_ElevenLabs_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
