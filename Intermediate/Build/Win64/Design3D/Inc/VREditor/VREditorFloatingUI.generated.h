// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorFloatingUI_generated_h
#error "VREditorFloatingUI.generated.h already included, missing '#pragma once' in VREditorFloatingUI.h"
#endif
#define VREDITOR_VREditorFloatingUI_generated_h

#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorFloatingUI(); \
	friend struct Z_Construct_UClass_AVREditorFloatingUI_Statics; \
public: \
	DECLARE_CLASS(AVREditorFloatingUI, AVREditorBaseActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorFloatingUI)


#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAVREditorFloatingUI(); \
	friend struct Z_Construct_UClass_AVREditorFloatingUI_Statics; \
public: \
	DECLARE_CLASS(AVREditorFloatingUI, AVREditorBaseActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorFloatingUI)


#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVREditorFloatingUI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVREditorFloatingUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorFloatingUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorFloatingUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorFloatingUI(AVREditorFloatingUI&&); \
	NO_API AVREditorFloatingUI(const AVREditorFloatingUI&); \
public:


#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVREditorFloatingUI(AVREditorFloatingUI&&); \
	NO_API AVREditorFloatingUI(const AVREditorFloatingUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorFloatingUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorFloatingUI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorFloatingUI)


#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserWidget() { return STRUCT_OFFSET(AVREditorFloatingUI, UserWidget); } \
	FORCEINLINE static uint32 __PPO__WidgetComponent() { return STRUCT_OFFSET(AVREditorFloatingUI, WidgetComponent); } \
	FORCEINLINE static uint32 __PPO__WindowMeshComponent() { return STRUCT_OFFSET(AVREditorFloatingUI, WindowMeshComponent); } \
	FORCEINLINE static uint32 __PPO__UserWidgetClass() { return STRUCT_OFFSET(AVREditorFloatingUI, UserWidgetClass); }


#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_19_PROLOG
#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_INCLASS \
	Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AVREditorFloatingUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_UI_VREditorFloatingUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
