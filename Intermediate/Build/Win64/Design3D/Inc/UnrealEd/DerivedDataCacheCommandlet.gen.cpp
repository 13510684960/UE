// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/DerivedDataCacheCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDerivedDataCacheCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDerivedDataCacheCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDerivedDataCacheCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDerivedDataCacheCommandlet::StaticRegisterNativesUDerivedDataCacheCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UDerivedDataCacheCommandlet_NoRegister()
	{
		return UDerivedDataCacheCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DerivedDataCacheCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/DerivedDataCacheCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDerivedDataCacheCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics::ClassParams = {
		&UDerivedDataCacheCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDerivedDataCacheCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDerivedDataCacheCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDerivedDataCacheCommandlet, 2760259688);
	template<> UNREALED_API UClass* StaticClass<UDerivedDataCacheCommandlet>()
	{
		return UDerivedDataCacheCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDerivedDataCacheCommandlet(Z_Construct_UClass_UDerivedDataCacheCommandlet, &UDerivedDataCacheCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDerivedDataCacheCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDerivedDataCacheCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
