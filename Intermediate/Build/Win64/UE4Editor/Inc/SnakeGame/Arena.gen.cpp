// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Arena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArena() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_AArena_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AArena();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AWall_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AArena::StaticRegisterNativesAArena()
	{
	}
	UClass* Z_Construct_UClass_AArena_NoRegister()
	{
		return AArena::StaticClass();
	}
	struct Z_Construct_UClass_AArena_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WallActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArena_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Arena.h" },
		{ "ModuleRelativePath", "Arena.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArena_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Arena" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArena, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArena_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArena_Statics::NewProp_WallActor_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_WallActor = { "WallActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArena, WallActor), Z_Construct_UClass_AWall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArena_Statics::NewProp_WallActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::NewProp_WallActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArena_Statics::NewProp_WallActorClass_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Arena.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_WallActorClass = { "WallActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArena, WallActorClass), Z_Construct_UClass_AWall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AArena_Statics::NewProp_WallActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::NewProp_WallActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArena_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_WallActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_WallActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArena_Statics::ClassParams = {
		&AArena::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArena_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArena_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArena, 2173686120);
	template<> SNAKEGAME_API UClass* StaticClass<AArena>()
	{
		return AArena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArena(Z_Construct_UClass_AArena, &AArena::StaticClass, TEXT("/Script/SnakeGame"), TEXT("AArena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
