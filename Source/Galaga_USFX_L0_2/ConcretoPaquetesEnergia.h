// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISetPaquetesEnergia.h"
#include "ConcretoPaquetesEnergia.generated.h"

UCLASS()
class GALAGA_USFX_L0_2_API AConcretoPaquetesEnergia : public AActor,public IISetPaquetesEnergia
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcretoPaquetesEnergia();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetPaqueteEnergia1() override;
	void SetPaqueteEnergia2() override;
	void SetPaqueteEnergia3() override;

};
