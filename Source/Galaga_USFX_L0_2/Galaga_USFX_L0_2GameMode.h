// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBuilder.h"
#include "CazaBuilder.h"
#include "Galaga_USFX_L0_2GameMode.generated.h"

UCLASS(MinimalAPI)
class AGalaga_USFX_L0_2GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L0_2GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

//public:
//	ANaveEnemiga* NaveEnemiga01;
//	ANaveEnemigaCaza* NaveEnemigaCaza01;
//	ANaveEnemigaCaza* NaveEnemigaCaza02;
//	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
//	ANaveEnemigaTransporte* NaveEnemigaTransporte02;
//	ANaveEnemigaEspia* NaveEnemigaEspia01;
//	ANaveEnemigaNodriza* NaveEnemigaNodriza01;


public:
	//TArray<ANaveEnemiga*> TANavesEnemigas;
	//TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	//TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	//TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	//TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;

	void ActualizarPosicionesNavesEnemigas();
	void MostrarPosicionesNavesEnemigas();
	void EliminarNavesEnemigas();
	void CrearNavesEnemigas();
	void DetenerProceso();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavesEnemigas")
	//TMap<ANaveEnemiga*, FVector> TMPosicionesNavesEnemigas;



	FTimerHandle ManejadorEliminarNaves;
	FTimerHandle ManejadorCrearNaves;
	FTimerHandle ManejadorMostrarPosiciones;
	FTimerHandle ManejadorDetenerProceso;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Clases")
	TSubclassOf<class ANaveEnemigaCaza> ClaseNaveEnemigaCaza;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Clases")
	TSubclassOf<class ANaveEnemigaTransporte> ClaseNaveEnemigaTransporte;

private:
	FTimerHandle ManejadorTemporizador;


public:
	class DirectorNaveEnemiga
	{
	private:
		INaveEnemigaBuilder* Builder;

	public:
		/*DirectorNaveEnemiga(INaveEnemigaBuilder* builder) : Builder(builder) {}
		~DirectorNaveEnemiga() { delete Builder; }*/

		void ConstruirNaveEnemiga()
		{
			Builder->ConstruirNuevaNave();
			Builder->ConstruirComponentesArmas();
			Builder->ConstruirComponentesEscudos();
			Builder->ConstruirComponentesEnergia();
		}

		ANaveEnemiga* ObtenerNaveEnemiga() { return Builder->ObtenerNaveEnemiga(); }
	};

};



