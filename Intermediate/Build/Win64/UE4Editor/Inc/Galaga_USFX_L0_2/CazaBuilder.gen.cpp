// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/CazaBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCazaBuilder() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_ACazaBuilder_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_ACazaBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UNaveEnemigaBuilder_NoRegister();
// End Cross Module References
	void ACazaBuilder::StaticRegisterNativesACazaBuilder()
	{
	}
	UClass* Z_Construct_UClass_ACazaBuilder_NoRegister()
	{
		return ACazaBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ACazaBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACazaBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACazaBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CazaBuilder.h" },
		{ "ModuleRelativePath", "CazaBuilder.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACazaBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNaveEnemigaBuilder_NoRegister, (int32)VTABLE_OFFSET(ACazaBuilder, INaveEnemigaBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACazaBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACazaBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACazaBuilder_Statics::ClassParams = {
		&ACazaBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACazaBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACazaBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACazaBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACazaBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACazaBuilder, 3148656521);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<ACazaBuilder>()
	{
		return ACazaBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACazaBuilder(Z_Construct_UClass_ACazaBuilder, &ACazaBuilder::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("ACazaBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACazaBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
