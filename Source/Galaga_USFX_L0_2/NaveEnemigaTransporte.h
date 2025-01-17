// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L0_2_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	virtual void Tick(float DeltaTime) override;


	void DescargarContenido();


	void ActivarArmasDefensivas();


	void RecogerRecursos();


	void IntercambiarRecursos();

	void ReabastecerNaves();
public:
	ANaveEnemigaTransporte();
	virtual void Mover(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave Enemiga Nodriza")
	float TiempoDescarga;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave Enemiga Nodriza")
	float ArmasDefensivas;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave Enemiga Nodriza")
	float CapacidadCarga;


};
