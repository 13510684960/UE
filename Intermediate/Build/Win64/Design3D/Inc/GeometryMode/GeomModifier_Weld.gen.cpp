// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryMode/Classes/GeomModifier_Weld.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Weld() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Weld_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Weld();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Weld::StaticRegisterNativesUGeomModifier_Weld()
	{
	}
	UClass* Z_Construct_UClass_UGeomModifier_Weld_NoRegister()
	{
		return UGeomModifier_Weld::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Weld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Weld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Weld_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Weld.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Weld.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Weld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Weld>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Weld_Statics::ClassParams = {
		&UGeomModifier_Weld::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Weld_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Weld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Weld()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeomModifier_Weld_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeomModifier_Weld, 2999971904);
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Weld>()
	{
		return UGeomModifier_Weld::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeomModifier_Weld(Z_Construct_UClass_UGeomModifier_Weld, &UGeomModifier_Weld::StaticClass, TEXT("/Script/GeometryMode"), TEXT("UGeomModifier_Weld"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Weld);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
