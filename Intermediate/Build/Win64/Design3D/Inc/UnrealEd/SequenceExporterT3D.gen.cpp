// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Exporters/SequenceExporterT3D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceExporterT3D() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USequenceExporterT3D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USequenceExporterT3D();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USequenceExporterT3D::StaticRegisterNativesUSequenceExporterT3D()
	{
	}
	UClass* Z_Construct_UClass_USequenceExporterT3D_NoRegister()
	{
		return USequenceExporterT3D::StaticClass();
	}
	struct Z_Construct_UClass_USequenceExporterT3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceExporterT3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceExporterT3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/SequenceExporterT3D.h" },
		{ "ModuleRelativePath", "Classes/Exporters/SequenceExporterT3D.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceExporterT3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceExporterT3D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequenceExporterT3D_Statics::ClassParams = {
		&USequenceExporterT3D::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceExporterT3D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USequenceExporterT3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceExporterT3D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequenceExporterT3D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequenceExporterT3D, 1759522708);
	template<> UNREALED_API UClass* StaticClass<USequenceExporterT3D>()
	{
		return USequenceExporterT3D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequenceExporterT3D(Z_Construct_UClass_USequenceExporterT3D, &USequenceExporterT3D::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USequenceExporterT3D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceExporterT3D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
