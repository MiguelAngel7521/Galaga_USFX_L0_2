// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/IBuilderPaquetesEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBuilderPaquetesEnergia() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UIBuilderPaquetesEnergia_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UIBuilderPaquetesEnergia();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
// End Cross Module References
	void UIBuilderPaquetesEnergia::StaticRegisterNativesUIBuilderPaquetesEnergia()
	{
	}
	UClass* Z_Construct_UClass_UIBuilderPaquetesEnergia_NoRegister()
	{
		return UIBuilderPaquetesEnergia::StaticClass();
	}
	struct Z_Construct_UClass_UIBuilderPaquetesEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIBuilderPaquetesEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIBuilderPaquetesEnergia_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBuilderPaquetesEnergia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIBuilderPaquetesEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBuilderPaquetesEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIBuilderPaquetesEnergia_Statics::ClassParams = {
		&UIBuilderPaquetesEnergia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIBuilderPaquetesEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIBuilderPaquetesEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIBuilderPaquetesEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIBuilderPaquetesEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIBuilderPaquetesEnergia, 3131749610);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<UIBuilderPaquetesEnergia>()
	{
		return UIBuilderPaquetesEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIBuilderPaquetesEnergia(Z_Construct_UClass_UIBuilderPaquetesEnergia, &UIBuilderPaquetesEnergia::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("UIBuilderPaquetesEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIBuilderPaquetesEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
