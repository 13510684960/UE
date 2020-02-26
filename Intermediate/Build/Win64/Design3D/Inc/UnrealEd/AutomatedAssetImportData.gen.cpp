// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/AutomatedAssetImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomatedAssetImportData() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
// End Cross Module References
	void UAutomatedAssetImportData::StaticRegisterNativesUAutomatedAssetImportData()
	{
	}
	UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister()
	{
		return UAutomatedAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UAutomatedAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelToLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Factory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipReadOnly_MetaData[];
#endif
		static void NewProp_bSkipReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceExisting_MetaData[];
#endif
		static void NewProp_bReplaceExisting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceExisting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FactoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filenames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filenames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filenames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomatedAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AutomatedAssetImportData.h" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Contains data for a group of assets to import" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Full path to level to load before importing this group (only matters if importing assets into a level)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad = { "LevelToLoad", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedAssetImportData, LevelToLoad), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Pointer to the factory currently being sued" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedAssetImportData, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Whether or not to skip importing over read only assets that could not be checked out" },
	};
#endif
	void Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_SetBit(void* Obj)
	{
		((UAutomatedAssetImportData*)Obj)->bSkipReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly = { "bSkipReadOnly", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomatedAssetImportData), &Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Whether or not to replace existing assets" },
	};
#endif
	void Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_SetBit(void* Obj)
	{
		((UAutomatedAssetImportData*)Obj)->bReplaceExisting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting = { "bReplaceExisting", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutomatedAssetImportData), &Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Name of the factory to use when importing these assets. If not specified the factory type will be auto detected" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName = { "FactoryName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedAssetImportData, FactoryName), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Content path in the projects content directory where assets will be imported" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedAssetImportData, DestinationPath), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Filenames to import" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames = { "Filenames", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedAssetImportData, Filenames), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_Inner = { "Filenames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Display name of the group. This is for logging purposes only." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutomatedAssetImportData, GroupName), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomatedAssetImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomatedAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomatedAssetImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::ClassParams = {
		&UAutomatedAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomatedAssetImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomatedAssetImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomatedAssetImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomatedAssetImportData, 2855492586);
	template<> UNREALED_API UClass* StaticClass<UAutomatedAssetImportData>()
	{
		return UAutomatedAssetImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomatedAssetImportData(Z_Construct_UClass_UAutomatedAssetImportData, &UAutomatedAssetImportData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UAutomatedAssetImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomatedAssetImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
