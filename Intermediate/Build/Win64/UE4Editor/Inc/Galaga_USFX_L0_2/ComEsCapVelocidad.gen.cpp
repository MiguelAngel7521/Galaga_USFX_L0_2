// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L0_2/ComEsCapVelocidad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComEsCapVelocidad() {}
// Cross Module References
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UComEsCapVelocidad_NoRegister();
	GALAGA_USFX_L0_2_API UClass* Z_Construct_UClass_UComEsCapVelocidad();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L0_2();
// End Cross Module References
	void UComEsCapVelocidad::StaticRegisterNativesUComEsCapVelocidad()
	{
	}
	UClass* Z_Construct_UClass_UComEsCapVelocidad_NoRegister()
	{
		return UComEsCapVelocidad::StaticClass();
	}
	struct Z_Construct_UClass_UComEsCapVelocidad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComEsCapVelocidad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L0_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComEsCapVelocidad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ComEsCapVelocidad.h" },
		{ "ModuleRelativePath", "ComEsCapVelocidad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComEsCapVelocidad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComEsCapVelocidad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComEsCapVelocidad_Statics::ClassParams = {
		&UComEsCapVelocidad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComEsCapVelocidad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComEsCapVelocidad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComEsCapVelocidad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComEsCapVelocidad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComEsCapVelocidad, 4267166964);
	template<> GALAGA_USFX_L0_2_API UClass* StaticClass<UComEsCapVelocidad>()
	{
		return UComEsCapVelocidad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComEsCapVelocidad(Z_Construct_UClass_UComEsCapVelocidad, &UComEsCapVelocidad::StaticClass, TEXT("/Script/Galaga_USFX_L0_2"), TEXT("UComEsCapVelocidad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComEsCapVelocidad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
