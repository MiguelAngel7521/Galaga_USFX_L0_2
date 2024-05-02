// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_USFX_L0_2_ProjectileEnemigo_generated_h
#error "ProjectileEnemigo.generated.h already included, missing '#pragma once' in ProjectileEnemigo.h"
#endif
#define GALAGA_USFX_L0_2_ProjectileEnemigo_generated_h

#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_SPARSE_DATA
#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileEnemigo(); \
	friend struct Z_Construct_UClass_AProjectileEnemigo_Statics; \
public: \
	DECLARE_CLASS(AProjectileEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L0_2"), NO_API) \
	DECLARE_SERIALIZER(AProjectileEnemigo)


#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileEnemigo(); \
	friend struct Z_Construct_UClass_AProjectileEnemigo_Statics; \
public: \
	DECLARE_CLASS(AProjectileEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L0_2"), NO_API) \
	DECLARE_SERIALIZER(AProjectileEnemigo)


#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileEnemigo(AProjectileEnemigo&&); \
	NO_API AProjectileEnemigo(const AProjectileEnemigo&); \
public:


#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileEnemigo(AProjectileEnemigo&&); \
	NO_API AProjectileEnemigo(const AProjectileEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileEnemigo)


#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_PRIVATE_PROPERTY_OFFSET
#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_13_PROLOG
#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_SPARSE_DATA \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_RPC_WRAPPERS \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_INCLASS \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_SPARSE_DATA \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_L0_2_API UClass* StaticClass<class AProjectileEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_L0_2_Source_Galaga_USFX_L0_2_ProjectileEnemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
