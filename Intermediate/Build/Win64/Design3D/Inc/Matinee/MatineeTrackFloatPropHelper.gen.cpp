// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Matinee/Classes/MatineeTrackFloatPropHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackFloatPropHelper() {}
// Cross Module References
	MATINEE_API UClass* Z_Construct_UClass_UMatineeTrackFloatPropHelper_NoRegister();
	MATINEE_API UClass* Z_Construct_UClass_UMatineeTrackFloatPropHelper();
	MATINEE_API UClass* Z_Construct_UClass_UInterpTrackHelper();
	UPackage* Z_Construct_UPackage__Script_Matinee();
// End Cross Module References
	void UMatineeTrackFloatPropHelper::StaticRegisterNativesUMatineeTrackFloatPropHelper()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackFloatPropHelper_NoRegister()
	{
		return UMatineeTrackFloatPropHelper::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeTrackFloatPropHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeTrackFloatPropHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_Matinee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeTrackFloatPropHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatineeTrackFloatPropHelper.h" },
		{ "ModuleRelativePath", "Classes/MatineeTrackFloatPropHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeTrackFloatPropHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatineeTrackFloatPropHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatineeTrackFloatPropHelper_Statics::ClassParams = {
		&UMatineeTrackFloatPropHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMatineeTrackFloatPropHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMatineeTrackFloatPropHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeTrackFloatPropHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatineeTrackFloatPropHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackFloatPropHelper, 394233546);
	template<> MATINEE_API UClass* StaticClass<UMatineeTrackFloatPropHelper>()
	{
		return UMatineeTrackFloatPropHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackFloatPropHelper(Z_Construct_UClass_UMatineeTrackFloatPropHelper, &UMatineeTrackFloatPropHelper::StaticClass, TEXT("/Script/Matinee"), TEXT("UMatineeTrackFloatPropHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackFloatPropHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
