// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElevenLabs_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	ELEVENLABS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature();
	ELEVENLABS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature();
	ELEVENLABS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ElevenLabs;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ElevenLabs()
	{
		if (!Z_Registration_Info_UPackage__Script_ElevenLabs.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsChunkDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsCompletedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_ElevenLabs_ElevenLabsErrorDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ElevenLabs",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x94F128D7,
			0x65C01D77,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ElevenLabs.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ElevenLabs.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ElevenLabs(Z_Construct_UPackage__Script_ElevenLabs, TEXT("/Script/ElevenLabs"), Z_Registration_Info_UPackage__Script_ElevenLabs, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x94F128D7, 0x65C01D77));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
