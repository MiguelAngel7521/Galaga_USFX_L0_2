// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/ConcretoPaquetesEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcretoPaquetesEnergia() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_AConcretoPaquetesEnergia_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_AConcretoPaquetesEnergia();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UISetPaquetesEnergia_NoRegister();
// End Cross Module References
	void AConcretoPaquetesEnergia::StaticRegisterNativesAConcretoPaquetesEnergia()
	{
	}
	UClass* Z_Construct_UClass_AConcretoPaquetesEnergia_NoRegister()
	{
		return AConcretoPaquetesEnergia::StaticClass();
	}
	struct Z_Construct_UClass_AConcretoPaquetesEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcretoPaquetesEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoPaquetesEnergia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcretoPaquetesEnergia.h" },
		{ "ModuleRelativePath", "ConcretoPaquetesEnergia.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConcretoPaquetesEnergia_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UISetPaquetesEnergia_NoRegister, (int32)VTABLE_OFFSET(AConcretoPaquetesEnergia, IISetPaquetesEnergia), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcretoPaquetesEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcretoPaquetesEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConcretoPaquetesEnergia_Statics::ClassParams = {
		&AConcretoPaquetesEnergia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AConcretoPaquetesEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoPaquetesEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcretoPaquetesEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConcretoPaquetesEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConcretoPaquetesEnergia, 3215082117);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<AConcretoPaquetesEnergia>()
	{
		return AConcretoPaquetesEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConcretoPaquetesEnergia(Z_Construct_UClass_AConcretoPaquetesEnergia, &AConcretoPaquetesEnergia::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("AConcretoPaquetesEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcretoPaquetesEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
