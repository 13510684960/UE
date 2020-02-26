// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorSettings_generated_h
#error "EditorSettings.generated.h already included, missing '#pragma once' in EditorSettings.h"
#endif
#define UNREALED_EditorSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSettings(); \
	friend struct Z_Construct_UClass_UEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEditorSettings(); \
	friend struct Z_Construct_UClass_UEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorSettings(UEditorSettings&&); \
	NO_API UEditorSettings(const UEditorSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorSettings(UEditorSettings&&); \
	NO_API UEditorSettings(const UEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSettings)


#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_13_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS