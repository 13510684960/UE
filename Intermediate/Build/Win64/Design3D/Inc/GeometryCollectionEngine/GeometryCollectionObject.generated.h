// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionObject_generated_h
#error "GeometryCollectionObject.generated.h already included, missing '#pragma once' in GeometryCollectionObject.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionObject_generated_h

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollection, NO_API)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCollection(); \
	friend struct Z_Construct_UClass_UGeometryCollection_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCollection) \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCollection(); \
	friend struct Z_Construct_UClass_UGeometryCollection_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCollection) \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCollection(UGeometryCollection&&); \
	NO_API UGeometryCollection(const UGeometryCollection&); \
public:


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCollection(UGeometryCollection&&); \
	NO_API UGeometryCollection(const UGeometryCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollection)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PersistentGuid() { return STRUCT_OFFSET(UGeometryCollection, PersistentGuid); } \
	FORCEINLINE static uint32 __PPO__StateGuid() { return STRUCT_OFFSET(UGeometryCollection, StateGuid); } \
	FORCEINLINE static uint32 __PPO__InteriorMaterialIndex() { return STRUCT_OFFSET(UGeometryCollection, InteriorMaterialIndex); } \
	FORCEINLINE static uint32 __PPO__BoneSelectedMaterialIndex() { return STRUCT_OFFSET(UGeometryCollection, BoneSelectedMaterialIndex); }


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_22_PROLOG
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_INCLASS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCollection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UGeometryCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
