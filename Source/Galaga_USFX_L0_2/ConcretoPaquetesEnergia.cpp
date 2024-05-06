// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoPaquetesEnergia.h"
#include "CapVelocidad.h"
#include "CapEnergia.h"
#include "CapVida.h"

// Sets default values
AConcretoPaquetesEnergia::AConcretoPaquetesEnergia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConcretoPaquetesEnergia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConcretoPaquetesEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConcretoPaquetesEnergia::SetPaqueteEnergia1()
{
	ACapVelocidad* CapVelocidad;
}

void AConcretoPaquetesEnergia::SetPaqueteEnergia2()
{
	ACapEnergia* CapEnergia;
}

void AConcretoPaquetesEnergia::SetPaqueteEnergia3()
{
	ACapVida* CapVida;
}

