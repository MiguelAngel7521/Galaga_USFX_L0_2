// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/NaveEnemigaCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaCaza() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_ANaveEnemigaCaza_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_ANaveEnemigaCaza();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_AProjectileEnemigo_NoRegister();
// End Cross Module References
	void ANaveEnemigaCaza::StaticRegisterNativesANaveEnemigaCaza()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaCaza_NoRegister()
	{
		return ANaveEnemigaCaza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProyectilEnemigoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProyectilEnemigoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaCaza.h" },
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_ProyectilEnemigoClass_MetaData[] = {
		{ "Category", "Proyectil" },
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_ProyectilEnemigoClass = { "ProyectilEnemigoClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaCaza, ProyectilEnemigoClass), Z_Construct_UClass_AProjectileEnemigo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_ProyectilEnemigoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_ProyectilEnemigoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Proyectil" },
		{ "ModuleRelativePath", "NaveEnemigaCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaCaza, FireRate), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_FireRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_ProyectilEnemigoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaCaza_Statics::NewProp_FireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaCaza_Statics::ClassParams = {
		&ANaveEnemigaCaza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaCaza, 3844268365);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<ANaveEnemigaCaza>()
	{
		return ANaveEnemigaCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaCaza(Z_Construct_UClass_ANaveEnemigaCaza, &ANaveEnemigaCaza::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("ANaveEnemigaCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
