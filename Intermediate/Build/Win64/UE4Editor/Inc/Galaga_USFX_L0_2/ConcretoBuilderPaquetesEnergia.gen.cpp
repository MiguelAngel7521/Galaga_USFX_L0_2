// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/ConcretoBuilderPaquetesEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcretoBuilderPaquetesEnergia() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_AConcretoBuilderPaquetesEnergia();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UIBuilderPaquetesEnergia_NoRegister();
// End Cross Module References
	void AConcretoBuilderPaquetesEnergia::StaticRegisterNativesAConcretoBuilderPaquetesEnergia()
	{
	}
	UClass* Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_NoRegister()
	{
		return AConcretoBuilderPaquetesEnergia::StaticClass();
	}
	struct Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcretoBuilderPaquetesEnergia.h" },
		{ "ModuleRelativePath", "ConcretoBuilderPaquetesEnergia.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBuilderPaquetesEnergia_NoRegister, (int32)VTABLE_OFFSET(AConcretoBuilderPaquetesEnergia, IIBuilderPaquetesEnergia), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcretoBuilderPaquetesEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics::ClassParams = {
		&AConcretoBuilderPaquetesEnergia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcretoBuilderPaquetesEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConcretoBuilderPaquetesEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConcretoBuilderPaquetesEnergia, 3828311167);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<AConcretoBuilderPaquetesEnergia>()
	{
		return AConcretoBuilderPaquetesEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConcretoBuilderPaquetesEnergia(Z_Construct_UClass_AConcretoBuilderPaquetesEnergia, &AConcretoBuilderPaquetesEnergia::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("AConcretoBuilderPaquetesEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcretoBuilderPaquetesEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
