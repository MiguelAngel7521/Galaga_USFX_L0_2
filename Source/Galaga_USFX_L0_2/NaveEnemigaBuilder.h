// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveEnemigaBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNaveEnemigaBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L0_2_API INaveEnemigaBuilder
{
	GENERATED_BODY()

	
public:
	
	virtual void ConstruirNuevaNave() = 0;
	virtual void ConstruirMalla() = 0;	
	virtual void ConstruirMotor() = 0; //Movimiento
	virtual void ConstruirComponentesArmas() = 0;
	virtual void ConstruirComponentesEscudos() = 0;
	virtual void ConstruirComponentesEnergia() = 0;
	virtual class ANaveEnemiga* ObtenerNaveEnemiga() = 0;

};
