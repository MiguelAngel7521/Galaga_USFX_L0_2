// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapVelocidad.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L0_2_API ACapVelocidad : public ACapsula
{
	GENERATED_BODY()
protected:
	ACapVelocidad();
	FString tipoCapsula = "Velocidad";
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};