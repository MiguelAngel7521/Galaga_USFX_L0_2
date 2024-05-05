// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoBuilderPaquetesEnergia.h"
#include "ConcretoPaquetesEnergia.h"

// Sets default values
AConcretoBuilderPaquetesEnergia::AConcretoBuilderPaquetesEnergia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConcretoBuilderPaquetesEnergia::BeginPlay()
{
	Super::BeginPlay();
	PaqueteEnergia = GetWorld()->SpawnActor<AConcretoPaquetesEnergia>(AConcretoPaquetesEnergia::StaticClass());
	PaqueteEnergia->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AConcretoBuilderPaquetesEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConcretoBuilderPaquetesEnergia::BuildPaqueteEnergia1()
{
	PaqueteEnergia->SetPaqueteEnergia1();
}

void AConcretoBuilderPaquetesEnergia::BuildPaqueteEnergia2()
{
	PaqueteEnergia->SetPaqueteEnergia2();
}

void AConcretoBuilderPaquetesEnergia::BuildPaqueteEnergia3()
{
	PaqueteEnergia->SetPaqueteEnergia3();
}

