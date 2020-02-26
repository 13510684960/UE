// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_CommutativeAssociativeBinaryOperator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CommutativeAssociativeBinaryOperator() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
// End Cross Module References
	void UK2Node_CommutativeAssociativeBinaryOperator::StaticRegisterNativesUK2Node_CommutativeAssociativeBinaryOperator()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_NoRegister()
	{
		return UK2Node_CommutativeAssociativeBinaryOperator::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumAdditionalInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAdditionalInputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CommutativeAssociativeBinaryOperator.h" },
		{ "ModuleRelativePath", "Classes/K2Node_CommutativeAssociativeBinaryOperator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::NewProp_NumAdditionalInputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_CommutativeAssociativeBinaryOperator.h" },
		{ "ToolTip", "The number of additional input pins to generate for this node (2 base pins are not included)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::NewProp_NumAdditionalInputs = { "NumAdditionalInputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_CommutativeAssociativeBinaryOperator, NumAdditionalInputs), METADATA_PARAMS(Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::NewProp_NumAdditionalInputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::NewProp_NumAdditionalInputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::NewProp_NumAdditionalInputs,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_CommutativeAssociativeBinaryOperator, IK2Node_AddPinInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CommutativeAssociativeBinaryOperator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::ClassParams = {
		&UK2Node_CommutativeAssociativeBinaryOperator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_CommutativeAssociativeBinaryOperator, 462658571);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_CommutativeAssociativeBinaryOperator>()
	{
		return UK2Node_CommutativeAssociativeBinaryOperator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_CommutativeAssociativeBinaryOperator(Z_Construct_UClass_UK2Node_CommutativeAssociativeBinaryOperator, &UK2Node_CommutativeAssociativeBinaryOperator::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_CommutativeAssociativeBinaryOperator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CommutativeAssociativeBinaryOperator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
