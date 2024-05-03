// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L0_2GameMode.h"
#include "Galaga_USFX_L0_2Pawn.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaNodriza.h"
#include "TimerManager.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.h"
#include "FabricaNaveEnemigas.h"
#include "NaveEnemigaBuilder.h"
#include "DirectorBuilder.h"
#include "CazaBuilder.h"
#include "ComponenteEscudo.h"
#include "ComponenteArmas.h"


AGalaga_USFX_L0_2GameMode::AGalaga_USFX_L0_2GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L0_2Pawn::StaticClass();
}


void AGalaga_USFX_L0_2GameMode::ActualizarPosicionesNavesEnemigas()
{
	//for (ANaveEnemiga* NaveEnemiga : TANavesEnemigas)
	//{
	//	TMPosicionesNavesEnemigas.Add(NaveEnemiga, NaveEnemiga->GetActorLocation());
	//}
}
void AGalaga_USFX_L0_2GameMode::EliminarNavesEnemigas()
{
	//for (ANaveEnemiga* NaveEnemiga : TANavesEnemigas)
	//{
	//	NaveEnemiga->Destroy();
	//}
	//TANavesEnemigas.Empty();
}
void AGalaga_USFX_L0_2GameMode::MostrarPosicionesNavesEnemigas()
{	
	/*for (auto ElementoActual : TMPosicionesNavesEnemigas) {
		ANaveEnemiga* naveEnemigaActual = ElementoActual.Key;
		FVector posicionActualNaveEnemiga = ElementoActual.Value;
		FString mensaje = "La nave " + naveEnemigaActual->GetNombre() + " esta en la posicion> " + posicionActualNaveEnemiga.ToString();

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, mensaje);

			/*FString mensaje = "Nombre NaveEnemiga: " + Clave->GetNombre() + " Posicion NaveEnemiga: " + Valor.ToString();
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, mensaje);*

		}

		TMPosicionesNavesEnemigas[naveEnemigaActual] = naveEnemigaActual->GetActorLocation();
	}*/
}
void AGalaga_USFX_L0_2GameMode::DetenerProceso()
{
	/*Detener Todos los timers*/
	GetWorldTimerManager().ClearTimer(ManejadorEliminarNaves);
	GetWorldTimerManager().ClearTimer(ManejadorCrearNaves);
	GetWorldTimerManager().ClearTimer(ManejadorMostrarPosiciones);
	GetWorldTimerManager().ClearTimer(ManejadorDetenerProceso);
}	

void AGalaga_USFX_L0_2GameMode::CrearNavesEnemigas()
{
	/*UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector ubicacionInicialNavesEnemigas = FVector(0.0f, 0.0f, 150.0f);
		FVector ubicacionActualNaveEnemiga = ubicacionInicialNavesEnemigas;
		FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

		for (int i = 0; i < 3; i++)
		{
			ANaveEnemiga* NuevaNaveEnemiga = nullptr;

			int32 TipoAleatorio = FMath::RandRange(0, 1);

			if (TipoAleatorio == 0)
			{
				NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaCaza>(ubicacionInicialNavesEnemigas, rotacionNave);
			}
			else
			{
				NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionInicialNavesEnemigas, rotacionNave);
			}

			NuevaNaveEnemiga->SetNombre("Nave Enemiga " + FString::FromInt(i));
			TANavesEnemigas.Add(NuevaNaveEnemiga);
			TMPosicionesNavesEnemigas.Add(NuevaNaveEnemiga, ubicacionInicialNavesEnemigas);

			ubicacionInicialNavesEnemigas.Y += 150.0f;
		}
	}*/

}
void AGalaga_USFX_L0_2GameMode::BeginPlay()
{
	Super::BeginPlay();

	/*ADirectorBuilder director;*/
	//ANaveEnemigaBuilder builder; // El nombre de esta clase depende de cómo lo implementes
	/*director.setBuilder(&builder);*/
	/*NaveEnemigaCaza* nave = director.construirNaveEnemiga();*/


	FVector ubicacionInicioNavesEnemigasCaza = FVector(0.0f, -500.0f, 200.0f);
	FRotator rotacionInicioNavesEnemigasCaza = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicacionInicioNavesEnemigasTransporte = FVector(300.0f, -500.0f, 200.0f);
	FRotator rotacionInicioNavesEnemigasTransporte = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicacionInicioNavesAmigas = FVector(-1000.0f, -1000.0f, 200.0f);
	FRotator rotacionInicioNavesAmigas = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		for (int i = 0; i < 5; i++)
		{
			ubicacionInicioNavesEnemigasCaza = ubicacionInicioNavesEnemigasCaza + FVector(0.0f, 200.0f, 0.0f);
			ANaveEnemigaCaza* NaveEnemigaTemporal = World->SpawnActor<ANaveEnemigaCaza>(ubicacionInicioNavesEnemigasCaza, rotacionInicioNavesEnemigasCaza);
			
		}

	/*	for (int i = 0; i < 5; i++)
		{
			ubicacionInicioNavesEnemigasTransporte = ubicacionInicioNavesEnemigasTransporte + FVector(0.0f, 200.0f, 0.0f);
			ANaveEnemigaTransporte* NaveEnemigaTemporal = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionInicioNavesEnemigasTransporte, rotacionInicioNavesEnemigasTransporte);
			
		}*/

	}
}