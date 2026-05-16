// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ElevenLabsSynthesizeTextAsync.h"

#ifdef ELEVENLABS_ElevenLabsSynthesizeTextAsync_generated_h
#error "ElevenLabsSynthesizeTextAsync.generated.h already included, missing '#pragma once' in ElevenLabsSynthesizeTextAsync.h"
#endif
#define ELEVENLABS_ElevenLabsSynthesizeTextAsync_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UElevenLabsSynthesizeTextAsync;
class UObject;
struct FElevenLabsTTSConfig;

// ********** Begin Delegate FElevenLabsTTSEventDelegate *******************************************
#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_17_DELEGATE \
ELEVENLABS_API void FElevenLabsTTSEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElevenLabsTTSEventDelegate, TArray<uint8> const& WavBytes, bool bIsFinal, int32 ChunkIndex, int32 SampleRate, int32 NumChannels, float DurationSeconds);


// ********** End Delegate FElevenLabsTTSEventDelegate *********************************************

// ********** Begin Delegate FElevenLabsTTSErrorDelegate *******************************************
#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_19_DELEGATE \
ELEVENLABS_API void FElevenLabsTTSErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ElevenLabsTTSErrorDelegate, const FString& ErrorMessage);


// ********** End Delegate FElevenLabsTTSErrorDelegate *********************************************

// ********** Begin Class UElevenLabsSynthesizeTextAsync *******************************************
#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSynthesizeTextToWav);


struct Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics;
ELEVENLABS_API UClass* Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_NoRegister();

#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElevenLabsSynthesizeTextAsync(); \
	friend struct ::Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ELEVENLABS_API UClass* ::Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_NoRegister(); \
public: \
	DECLARE_CLASS2(UElevenLabsSynthesizeTextAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElevenLabs"), Z_Construct_UClass_UElevenLabsSynthesizeTextAsync_NoRegister) \
	DECLARE_SERIALIZER(UElevenLabsSynthesizeTextAsync)


#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElevenLabsSynthesizeTextAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UElevenLabsSynthesizeTextAsync(UElevenLabsSynthesizeTextAsync&&) = delete; \
	UElevenLabsSynthesizeTextAsync(const UElevenLabsSynthesizeTextAsync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElevenLabsSynthesizeTextAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElevenLabsSynthesizeTextAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElevenLabsSynthesizeTextAsync) \
	NO_API virtual ~UElevenLabsSynthesizeTextAsync();


#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_21_PROLOG
#define FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UElevenLabsSynthesizeTextAsync;

// ********** End Class UElevenLabsSynthesizeTextAsync *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_aamee_OneDrive_Documents_Unreal_Projects_Mars_Plugins_ElevenLabs_Source_ElevenLabs_Public_ElevenLabsSynthesizeTextAsync_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
