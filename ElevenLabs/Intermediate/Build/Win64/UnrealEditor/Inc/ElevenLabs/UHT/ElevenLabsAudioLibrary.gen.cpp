// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElevenLabsAudioLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeElevenLabsAudioLibrary() {}

// ********** Begin Cross Module References ********************************************************
ELEVENLABS_API UClass* Z_Construct_UClass_UElevenLabsAudioLibrary();
ELEVENLABS_API UClass* Z_Construct_UClass_UElevenLabsAudioLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_ElevenLabs();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UElevenLabsAudioLibrary Function CreateSoundWaveFromWav ******************
struct Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics
{
	struct ElevenLabsAudioLibrary_eventCreateSoundWaveFromWav_Parms
	{
		TArray<uint8> WavBytes;
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ElevenLabs|Audio" },
		{ "ModuleRelativePath", "Public/ElevenLabsAudioLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSoundWaveFromWav constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WavBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WavBytes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSoundWaveFromWav constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSoundWaveFromWav Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::NewProp_WavBytes_Inner = { "WavBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::NewProp_WavBytes = { "WavBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsAudioLibrary_eventCreateSoundWaveFromWav_Parms, WavBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavBytes_MetaData), NewProp_WavBytes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsAudioLibrary_eventCreateSoundWaveFromWav_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::NewProp_WavBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::NewProp_WavBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::PropPointers) < 2048);
// ********** End Function CreateSoundWaveFromWav Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UElevenLabsAudioLibrary, nullptr, "CreateSoundWaveFromWav", 	Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::ElevenLabsAudioLibrary_eventCreateSoundWaveFromWav_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::Function_MetaDataParams), Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::ElevenLabsAudioLibrary_eventCreateSoundWaveFromWav_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UElevenLabsAudioLibrary::execCreateSoundWaveFromWav)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_WavBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=UElevenLabsAudioLibrary::CreateSoundWaveFromWav(Z_Param_Out_WavBytes);
	P_NATIVE_END;
}
// ********** End Class UElevenLabsAudioLibrary Function CreateSoundWaveFromWav ********************

// ********** Begin Class UElevenLabsAudioLibrary Function SaveWavBytesToTempFile ******************
struct Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics
{
	struct ElevenLabsAudioLibrary_eventSaveWavBytesToTempFile_Parms
	{
		TArray<uint8> WavBytes;
		FString FilePrefix;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ElevenLabs|Audio" },
		{ "CPP_Default_FilePrefix", "elevenlabs_tts" },
		{ "ModuleRelativePath", "Public/ElevenLabsAudioLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePrefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveWavBytesToTempFile constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WavBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WavBytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveWavBytesToTempFile constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveWavBytesToTempFile Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::NewProp_WavBytes_Inner = { "WavBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::NewProp_WavBytes = { "WavBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsAudioLibrary_eventSaveWavBytesToTempFile_Parms, WavBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavBytes_MetaData), NewProp_WavBytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::NewProp_FilePrefix = { "FilePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsAudioLibrary_eventSaveWavBytesToTempFile_Parms, FilePrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePrefix_MetaData), NewProp_FilePrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsAudioLibrary_eventSaveWavBytesToTempFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::NewProp_WavBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::NewProp_WavBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::NewProp_FilePrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::PropPointers) < 2048);
// ********** End Function SaveWavBytesToTempFile Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UElevenLabsAudioLibrary, nullptr, "SaveWavBytesToTempFile", 	Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::ElevenLabsAudioLibrary_eventSaveWavBytesToTempFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::ElevenLabsAudioLibrary_eventSaveWavBytesToTempFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UElevenLabsAudioLibrary::execSaveWavBytesToTempFile)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_WavBytes);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePrefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UElevenLabsAudioLibrary::SaveWavBytesToTempFile(Z_Param_Out_WavBytes,Z_Param_FilePrefix);
	P_NATIVE_END;
}
// ********** End Class UElevenLabsAudioLibrary Function SaveWavBytesToTempFile ********************

// ********** Begin Class UElevenLabsAudioLibrary **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UElevenLabsAudioLibrary;
UClass* UElevenLabsAudioLibrary::GetPrivateStaticClass()
{
	using TClass = UElevenLabsAudioLibrary;
	if (!Z_Registration_Info_UClass_UElevenLabsAudioLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ElevenLabsAudioLibrary"),
			Z_Registration_Info_UClass_UElevenLabsAudioLibrary.InnerSingleton,
			StaticRegisterNativesUElevenLabsAudioLibrary,
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
	return Z_Registration_Info_UClass_UElevenLabsAudioLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UElevenLabsAudioLibrary_NoRegister()
{
	return UElevenLabsAudioLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UElevenLabsAudioLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ElevenLabsAudioLibrary.h" },
		{ "ModuleRelativePath", "Public/ElevenLabsAudioLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UElevenLabsAudioLibrary constinit property declarations ******************
// ********** End Class UElevenLabsAudioLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSoundWaveFromWav"), .Pointer = &UElevenLabsAudioLibrary::execCreateSoundWaveFromWav },
		{ .NameUTF8 = UTF8TEXT("SaveWavBytesToTempFile"), .Pointer = &UElevenLabsAudioLibrary::execSaveWavBytesToTempFile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UElevenLabsAudioLibrary_CreateSoundWaveFromWav, "CreateSoundWaveFromWav" }, // 3225504147
		{ &Z_Construct_UFunction_UElevenLabsAudioLibrary_SaveWavBytesToTempFile, "SaveWavBytesToTempFile" }, // 571720122
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElevenLabsAudioLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UElevenLabsAudioLibrary_Statics
UObject* (*const Z_Construct_UClass_UElevenLabsAudioLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ElevenLabs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsAudioLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UElevenLabsAudioLibrary_Statics::ClassParams = {
	&UElevenLabsAudioLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsAudioLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UElevenLabsAudioLibrary_Statics::Class_MetaDataParams)
};
void UElevenLabsAudioLibrary::StaticRegisterNativesUElevenLabsAudioLibrary()
{
	UClass* Class = UElevenLabsAudioLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UElevenLabsAudioLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UElevenLabsAudioLibrary()
{
	if (!Z_Registration_Info_UClass_UElevenLabsAudioLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElevenLabsAudioLibrary.OuterSingleton, Z_Construct_UClass_UElevenLabsAudioLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UElevenLabsAudioLibrary.OuterSingleton;
}
UElevenLabsAudioLibrary::UElevenLabsAudioLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UElevenLabsAudioLibrary);
UElevenLabsAudioLibrary::~UElevenLabsAudioLibrary() {}
// ********** End Class UElevenLabsAudioLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsAudioLibrary_h__Script_ElevenLabs_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UElevenLabsAudioLibrary, UElevenLabsAudioLibrary::StaticClass, TEXT("UElevenLabsAudioLibrary"), &Z_Registration_Info_UClass_UElevenLabsAudioLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElevenLabsAudioLibrary), 460226112U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsAudioLibrary_h__Script_ElevenLabs_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsAudioLibrary_h__Script_ElevenLabs_557156898{
	TEXT("/Script/ElevenLabs"),
	Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsAudioLibrary_h__Script_ElevenLabs_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsAudioLibrary_h__Script_ElevenLabs_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
