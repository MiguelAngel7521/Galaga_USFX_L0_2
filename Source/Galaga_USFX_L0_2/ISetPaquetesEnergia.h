// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ISetPaquetesEnergia.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UISetPaquetesEnergia : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L0_2_API IISetPaquetesEnergia
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetPaqueteEnergia1() = 0;
	virtual void SetPaqueteEnergia2() = 0;
	virtual void SetPaqueteEnergia3() = 0;
};
