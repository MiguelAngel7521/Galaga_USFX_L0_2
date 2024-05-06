// Fill out your copyright notice in the Description page of Project Settings.


#include "ComEsCapVida.h"
#include "Galaga_USFX_L0_2Pawn.h"

// Sets default values for this component's properties
UComEsCapVida::UComEsCapVida()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UComEsCapVida::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComEsCapVida::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UComEsCapVida::AumentarVida()
{
	if (VidasRestantes > 0)
		VidasRestantes++;
}

