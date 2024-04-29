// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteArmas.h"

// Sets default values
AComponenteArmas::AComponenteArmas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AComponenteArmas::DispararNave(ANaveEnemiga* Nave)
{
}

// Called when the game starts or when spawned
void AComponenteArmas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComponenteArmas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

