// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaNaveEnemigos.generated.h"
#include "NaveEnemiga.h"

UCLASS()
class GALAGA_USFX_L0_2_API AFabricaNaveEnemigos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaNaveEnemigos();
	
	virtual  ANaveEnemiga* CrearNavesEnemigas(UWorld* World,FString Categoria, FVector Location, FRotator Rotation) PURE_VIRTUAL(AFabricaNaveEnemigos::CrearNavesEnemigas, return nullptr;);
	ANaveEnemiga* FabricarNave(UWorld* World, FString Categoria, FVector Location, FRotator Rotation) ;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
