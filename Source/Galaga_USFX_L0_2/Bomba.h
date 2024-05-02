// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

UCLASS()
class GALAGA_USFX_L0_2_API ABomba : public AActor
{
	GENERATED_BODY()
	
public:
    // Sets default values for this actor's properties
    ABomba();

private:
	float tiempoExplosion;
	float velocidad;
	float danoProducido;
	float valorDestruccion;
	float tiempoDisparo;
	FVector posicion;


public:

	FORCEINLINE float GetTiempoExplosion() const { return tiempoExplosion; }

	FORCEINLINE void SetTiempoExplosion(float _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; }

public:

	virtual void Tick(float DeltaTime) override;
	void Mover(float DeltaTime);
	void Explotar();

};
