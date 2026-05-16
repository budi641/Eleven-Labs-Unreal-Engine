// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElevenLabsSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeElevenLabsSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ELEVENLABS_API UClass* Z_Construct_UClass_UElevenLabsSettings();
ELEVENLABS_API UClass* Z_Construct_UClass_UElevenLabsSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ElevenLabs();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UElevenLabsSettings ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UElevenLabsSettings;
UClass* UElevenLabsSettings::GetPrivateStaticClass()
{
	using TClass = UElevenLabsSettings;
	if (!Z_Registration_Info_UClass_UElevenLabsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ElevenLabsSettings"),
			Z_Registration_Info_UClass_UElevenLabsSettings.InnerSingleton,
			StaticRegisterNativesUElevenLabsSettings,
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
	return Z_Registration_Info_UClass_UElevenLabsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UElevenLabsSettings_NoRegister()
{
	return UElevenLabsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UElevenLabsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Eleven Labs" },
		{ "IncludePath", "ElevenLabsSettings.h" },
		{ "ModuleRelativePath", "Public/ElevenLabsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[] = {
		{ "Category", "Authentication" },
		{ "DisplayName", "API Key" },
		{ "ModuleRelativePath", "Public/ElevenLabsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTimeoutSeconds_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Public/ElevenLabsSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UElevenLabsSettings constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTimeoutSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UElevenLabsSettings constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElevenLabsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UElevenLabsSettings_Statics

// ********** Begin Class UElevenLabsSettings Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElevenLabsSettings_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSettings, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKey_MetaData), NewProp_ApiKey_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElevenLabsSettings_Statics::NewProp_DefaultTimeoutSeconds = { "DefaultTimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsSettings, DefaultTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTimeoutSeconds_MetaData), NewProp_DefaultTimeoutSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElevenLabsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsSettings_Statics::NewProp_ApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsSettings_Statics::NewProp_DefaultTimeoutSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsSettings_Statics::PropPointers) < 2048);
// ********** End Class UElevenLabsSettings Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UElevenLabsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ElevenLabs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UElevenLabsSettings_Statics::ClassParams = {
	&UElevenLabsSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UElevenLabsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UElevenLabsSettings_Statics::Class_MetaDataParams)
};
void UElevenLabsSettings::StaticRegisterNativesUElevenLabsSettings()
{
}
UClass* Z_Construct_UClass_UElevenLabsSettings()
{
	if (!Z_Registration_Info_UClass_UElevenLabsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElevenLabsSettings.OuterSingleton, Z_Construct_UClass_UElevenLabsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UElevenLabsSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UElevenLabsSettings);
UElevenLabsSettings::~UElevenLabsSettings() {}
// ********** End Class UElevenLabsSettings ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSettings_h__Script_ElevenLabs_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UElevenLabsSettings, UElevenLabsSettings::StaticClass, TEXT("UElevenLabsSettings"), &Z_Registration_Info_UClass_UElevenLabsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElevenLabsSettings), 1521593346U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSettings_h__Script_ElevenLabs_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSettings_h__Script_ElevenLabs_1247359539{
	TEXT("/Script/ElevenLabs"),
	Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSettings_h__Script_ElevenLabs_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSettings_h__Script_ElevenLabs_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
