// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/StringTableFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UStringTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UStringTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UStringTableFactory::StaticRegisterNativesUStringTableFactory()
	{
	}
	UClass* Z_Construct_UClass_UStringTableFactory_NoRegister()
	{
		return UStringTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStringTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/StringTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/StringTableFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringTableFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStringTableFactory_Statics::ClassParams = {
		&UStringTableFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStringTableFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStringTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringTableFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStringTableFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStringTableFactory, 1475423752);
	template<> UNREALED_API UClass* StaticClass<UStringTableFactory>()
	{
		return UStringTableFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringTableFactory(Z_Construct_UClass_UStringTableFactory, &UStringTableFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UStringTableFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringTableFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
