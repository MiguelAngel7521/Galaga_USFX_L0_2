// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/ISetPaquetesEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISetPaquetesEnergia() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UISetPaquetesEnergia_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UISetPaquetesEnergia();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
// End Cross Module References
	void UISetPaquetesEnergia::StaticRegisterNativesUISetPaquetesEnergia()
	{
	}
	UClass* Z_Construct_UClass_UISetPaquetesEnergia_NoRegister()
	{
		return UISetPaquetesEnergia::StaticClass();
	}
	struct Z_Construct_UClass_UISetPaquetesEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISetPaquetesEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISetPaquetesEnergia_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ISetPaquetesEnergia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISetPaquetesEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISetPaquetesEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UISetPaquetesEnergia_Statics::ClassParams = {
		&UISetPaquetesEnergia::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UISetPaquetesEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISetPaquetesEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISetPaquetesEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UISetPaquetesEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UISetPaquetesEnergia, 2526911073);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<UISetPaquetesEnergia>()
	{
		return UISetPaquetesEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UISetPaquetesEnergia(Z_Construct_UClass_UISetPaquetesEnergia, &UISetPaquetesEnergia::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("UISetPaquetesEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISetPaquetesEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
