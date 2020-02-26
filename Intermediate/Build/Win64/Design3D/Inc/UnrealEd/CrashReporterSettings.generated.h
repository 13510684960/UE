// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CrashReporterSettings_generated_h
#error "CrashReporterSettings.generated.h already included, missing '#pragma once' in CrashReporterSettings.h"
#endif
#define UNREALED_CrashReporterSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrashReporterSettings(); \
	friend struct Z_Construct_UClass_UCrashReporterSettings_Statics; \
public: \
	DECLARE_CLASS(UCrashReporterSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCrashReporterSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCrashReporterSettings(); \
	friend struct Z_Construct_UClass_UCrashReporterSettings_Statics; \
public: \
	DECLARE_CLASS(UCrashReporterSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCrashReporterSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrashReporterSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrashReporterSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrashReporterSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrashReporterSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrashReporterSettings(UCrashReporterSettings&&); \
	NO_API UCrashReporterSettings(const UCrashReporterSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrashReporterSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrashReporterSettings(UCrashReporterSettings&&); \
	NO_API UCrashReporterSettings(const UCrashReporterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrashReporterSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrashReporterSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrashReporterSettings)


#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_17_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CrashReporterSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCrashReporterSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_CrashReporterSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
