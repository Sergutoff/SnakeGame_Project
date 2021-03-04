// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeBase() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
// End Cross Module References
	void ASnakeBase::StaticRegisterNativesASnakeBase()
	{
	}
	UClass* Z_Construct_UClass_ASnakeBase_NoRegister()
	{
		return ASnakeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElementSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnakeElements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeBase.h" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, SnakeElementClass), Z_Construct_UClass_ASnakeElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, ElementSize), METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_Inner = { "SnakeElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements = { "SnakeElements", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, SnakeElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeBase_Statics::ClassParams = {
		&ASnakeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnakeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeBase, 3546101536);
	template<> SNAKEGAME_API UClass* StaticClass<ASnakeBase>()
	{
		return ASnakeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeBase(Z_Construct_UClass_ASnakeBase, &ASnakeBase::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ASnakeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
