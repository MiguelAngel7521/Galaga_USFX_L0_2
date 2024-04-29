// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/ComponenteArmas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteArmas() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_AComponenteArmas_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_AComponenteArmas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
// End Cross Module References
	void AComponenteArmas::StaticRegisterNativesAComponenteArmas()
	{
	}
	UClass* Z_Construct_UClass_AComponenteArmas_NoRegister()
	{
		return AComponenteArmas::StaticClass();
	}
	struct Z_Construct_UClass_AComponenteArmas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponenteArmas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponenteArmas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComponenteArmas.h" },
		{ "ModuleRelativePath", "ComponenteArmas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponenteArmas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponenteArmas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComponenteArmas_Statics::ClassParams = {
		&AComponenteArmas::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComponenteArmas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComponenteArmas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponenteArmas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComponenteArmas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComponenteArmas, 1865775333);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<AComponenteArmas>()
	{
		return AComponenteArmas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComponenteArmas(Z_Construct_UClass_AComponenteArmas, &AComponenteArmas::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("AComponenteArmas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponenteArmas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
