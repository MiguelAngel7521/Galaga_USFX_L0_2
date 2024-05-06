// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/ComEsCapEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComEsCapEnergia() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UComEsCapEnergia_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UComEsCapEnergia();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
// End Cross Module References
	void UComEsCapEnergia::StaticRegisterNativesUComEsCapEnergia()
	{
	}
	UClass* Z_Construct_UClass_UComEsCapEnergia_NoRegister()
	{
		return UComEsCapEnergia::StaticClass();
	}
	struct Z_Construct_UClass_UComEsCapEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComEsCapEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComEsCapEnergia_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ComEsCapEnergia.h" },
		{ "ModuleRelativePath", "ComEsCapEnergia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComEsCapEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComEsCapEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComEsCapEnergia_Statics::ClassParams = {
		&UComEsCapEnergia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComEsCapEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComEsCapEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComEsCapEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComEsCapEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComEsCapEnergia, 3506079245);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<UComEsCapEnergia>()
	{
		return UComEsCapEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComEsCapEnergia(Z_Construct_UClass_UComEsCapEnergia, &UComEsCapEnergia::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("UComEsCapEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComEsCapEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
