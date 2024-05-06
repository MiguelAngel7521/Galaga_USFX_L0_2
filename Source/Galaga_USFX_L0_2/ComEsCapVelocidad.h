// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Galaga_USFX_L0_2Pawn.h"
#include "ComEsCapVelocidad.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L0_2_API UComEsCapVelocidad : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComEsCapVelocidad();
	int32 Velocidad = 0;
	int32 VelocidadActual = 1000;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void AumentarVelocidad(float Velocidad);
		
};
