// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorPaquetesEnergia.h"

// Sets default values
ADirectorPaquetesEnergia::ADirectorPaquetesEnergia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorPaquetesEnergia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorPaquetesEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorPaquetesEnergia::EstablecerConstructorPaquetes(AActor* _Constructor)
{
	BPE = Cast<IIBuilderPaquetesEnergia>(_Constructor);
	if (!BPE) //Error de registro si falla el lanzamiento
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Error al castear")));
	}
}

void ADirectorPaquetesEnergia::ConstruirPaqueteEnergia(int32 _Cont)
{
	if (1 == _Cont)
	{
		BPE->BuildPaqueteEnergia1();
	}
	else if (2 == _Cont)
	{
		BPE->BuildPaqueteEnergia2();
	}
	else if (3 == _Cont)
	{
		BPE->BuildPaqueteEnergia3();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Error al seleccionar el paquete de energia")));
	}
}

