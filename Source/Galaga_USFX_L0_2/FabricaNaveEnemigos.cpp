// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaNaveEnemigos.h"

// Sets default values
AFabricaNaveEnemigos::AFabricaNaveEnemigos()
{
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFabricaNaveEnemigos::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AFabricaNaveEnemigos::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

ANaveEnemiga* AFabricaNaveEnemigos::FabricarNave(UWorld* World, FString Categoria, FVector Location, FRotator Rotation)
{
    return CrearNavesEnemigas(World, Categoria, Location, Rotation);
}

ANaveEnemiga* FabricarNave(UWorld* World, FString Categoria, FVector Location, FRotator Rotation)
{
    return FabricarNave(World, Categoria, Location, Rotation);
}
