// Fill out your copyright notice in the Description page of Project Settings.


#include "ComEsCapEnergia.h"
#include "Galaga_USFX_L0_2Pawn.h"

// Sets default values for this component's properties
UComEsCapEnergia::UComEsCapEnergia()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UComEsCapEnergia::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComEsCapEnergia::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UComEsCapEnergia::AumentarEnergia(float Energia)
{
	if (EnergiaJugador < 10)
		EnergiaJugador++;
}

