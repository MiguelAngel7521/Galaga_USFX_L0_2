// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaBuilder.h"
#include "ComponenteArmas.generated.h"

UCLASS()
class GALAGA_USFX_L0_2_API AComponenteArmas : public AActor, public INaveEnemigaBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComponenteArmas();



	void DispararNave(ANaveEnemiga* Nave);
	virtual void ConstruirNuevaNave() override;
	virtual void ConstruirComponentesArmas() override;
	virtual void ConstruirComponentesEscudos() override;
	virtual void ConstruirComponentesEnergia() override;
	virtual ANaveEnemiga* ObtenerNaveEnemiga() override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
