// Fill out your copyright notice in the Description page of Project Settings.


#include "CazaBuilder.h"

// Sets default values
ACazaBuilder::ACazaBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACazaBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACazaBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ACazaBuilder::ConstruirNuevaNave()
{
	NaveEnemiga =GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass());
	NaveEnemiga->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	if (!NaveEnemiga) {
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir la nave"));	
	}
}

void ACazaBuilder::ConstruirComponentesArmas()
{
}

void ACazaBuilder::ConstruirComponentesEscudos()
{
}

void ACazaBuilder::ConstruirComponentesEnergia()
{
}

ANaveEnemiga* ACazaBuilder::ObtenerNaveEnemiga()
{
	return nullptr;
}

