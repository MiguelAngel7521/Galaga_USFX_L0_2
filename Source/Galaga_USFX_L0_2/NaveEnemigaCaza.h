// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L0_2_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	float HiperVelocidad;
	int NumeroMisiles;
	bool RayosLaserActivos;
	float DanoRayoLaser;
	float TiempoEntreRayosLaser;
	virtual void BeginPlay() override;
public:
	ANaveEnemigaCaza();
	virtual void Tick(float DeltaTime) override;
	void ActivarRayoLaser();
	void DescativarRayoLaser();
	void DispararRayoLaser();
	void DispararMisiles();
	virtual void mover(float DeltaTime);
		
	
};
