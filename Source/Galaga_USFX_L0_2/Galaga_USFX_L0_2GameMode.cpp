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
	FVector ubicacionInicialNavesEnemigas = FVector(0.0f, -400.0f, 200);
	FVector ubicacionActualNaveEnemiga = ubicacionInicialNavesEnemigas;
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	/*GetWorldTimerManager().SetTimer(ManejadorEliminarNaves, this, &AGalaga_USFX_L02GameMode::EliminarNavesEnemigas, 10.0f, true, 0.0f);
	GetWorldTimerManager().SetTimer(ManejadorCrearNaves, this, &AGalaga_USFX_L02GameMode::CrearNavesEnemigas, 20.0f, true, 10.0f);
	GetWorldTimerManager().SetTimer(ManejadorMostrarPosiciones, this, &AGalaga_USFX_L02GameMode::MostrarPosicionesNavesEnemigas, 15.0f, true, 0.0f);

	// Configurar el timer para detener el proceso después de 40 segundos
	GetWorldTimerManager().SetTimer(ManejadorDetenerProceso, this, &AGalaga_USFX_L02GameMode::DetenerProceso, 40.0f, false, 40.0f);*/

	UWorld* const World = GetWorld();
	const TArray<FVector>;

	if (World != nullptr)
	{
		const int32 MaxNaves = 15;
		const int32 NumTiposNaves = 4; // Caza, Transporte, Espia, Nodriza
		const int32 MaxNavesPorTipo = MaxNaves / NumTiposNaves;

		TArray<ANaveEnemiga*> NavesEnemigas;

			for (int i = 0; i < 10; ++i)
			{
				int32 TipoNave = FMath::RandRange(0, 1); // Random entre 0 y 3 para los 4 tipos de naves

				FString NombreNave = "Nave Enemiga " + FString::FromInt(i);

				ANaveEnemiga* NuevaNaveEnemiga = AFabricaNaveEnemigas::FabricarNave(TipoNave == 0 ? "Caza" : TipoNave == 1 ? "Transporte" : TipoNave == 2 ? "Espia" : "Nodriza", this);

				if (NuevaNaveEnemiga)
				{
					NuevaNaveEnemiga->SetNombre(NombreNave);
					NuevaNaveEnemiga->SetActorLocation(ubicacionInicialNavesEnemigas);
					NuevaNaveEnemiga->SetActorRotation(rotacionNave);
					NuevaNaveEnemiga->FinishSpawning(FTransform(rotacionNave, ubicacionInicialNavesEnemigas));

					World->SpawnActor(NuevaNaveEnemiga->GetClass(), &ubicacionInicialNavesEnemigas, &rotacionNave);


					ubicacionActualNaveEnemiga.Y += 200.0f;
					ubicacionActualNaveEnemiga.X = 0.0f;
					ubicacionActualNaveEnemiga.Z = 200.0f;
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("No se pudo crear la nave enemiga %s"), *NombreNave);
				}
			}
		
		




		/*for (int q = 0; q < MaxNaves; ++q)
		{
			int32 TipoNave = FMath::RandRange(0, NumTiposNaves - 1);

			FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 1000.0f), -400.0f, 200);
			FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

			ANaveEnemiga* NuevaNaveEnemiga = nullptr;

			switch (TipoNave)
			{
			case 0: {
				for (int w = 0; w < 1; w++)
				{
					if (ubicacionActualNaveEnemiga.Y != 1000.0f)
					{
						ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActualNaveEnemiga, rotacionNave);
						NaveEnemigaCazaActual->SetNombre("nave enemiga caza " + FString::FromInt(w));
						ubicacionActualNaveEnemiga.Y += 200.0f;
					}
					else
					{
						ubicacionActualNaveEnemiga.X = 200.0f;
						ubicacionActualNaveEnemiga.Y = 0.0f;
					}
					break;
				}*/




			//case 1: {
			//	for (int y = 0; y < 5; y++)
			//	{
			//		if (ubicacionActualNaveEnemiga.Y != 1000.0f)
			//		{
			//			ANaveEnemigaTransporte* ANaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActualNaveEnemiga, rotacionNave);
			//			ANaveEnemigaTransporteActual->SetNombre("nave enemiga caza " + FString::FromInt(y));
			//			ubicacionActualNaveEnemiga.Y += 200.0f;
			//		}
			//		else
			//		{
			//			ubicacionActualNaveEnemiga.X = 200.0f;
			//		}
			//	}

			//	ubicacionActualNaveEnemiga.X += 600.0f;
			//	ubicacionActualNaveEnemiga.Y = ubicacionInicialNavesEnemigas.Y;

			//	break;
			//}
			//case 2: {
			//	for (int k = 0; k < 5; k++) {
			//		if (ubicacionActualNaveEnemiga.Y != 1000)
			//		{
			//			ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ubicacionActualNaveEnemiga, rotacionNave);
			//			//TANavesEnemigasEspia.Add(NaveEnemigaEspiaActual);
			//			NaveEnemigaEspiaActual->SetNombre("nave enemiga espia" + FString::FromInt(k));
			//			//TANavesEnemigas.Add(NaveEnemigaEspiaActual);
			//			//TMPosicionesNavesEnemigas.Add(NaveEnemigaEspiaActual, ubicacionActualNaveEnemiga);
			//			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 200.0f;
			//		}
			//		else
			//		{
			//			ubicacionActualNaveEnemiga.X = 300.0f;
			//			ubicacionActualNaveEnemiga.Y = 0.0f;
			//		}
			//	}
			//	break;
			//}
			//case 3: {
			//	for (int p = 0; p < 5; p++) {
			//		if (ubicacionActualNaveEnemiga.Y != 1000) {
			//			ANaveEnemigaNodriza* NaveEnemigaNodrizaActual = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionActualNaveEnemiga, rotacionNave);
			//			//TANavesEnemigasNodriza.Add(NaveEnemigaNodrizaActual);
			//			NaveEnemigaNodrizaActual->SetNombre("nave enemiga nodriza" + FString::FromInt(p));
			//			//TANavesEnemigas.Add(NaveEnemigaNodrizaActual);
			//			//TMPosicionesNavesEnemigas.Add(NaveEnemigaNodrizaActual, ubicacionActualNaveEnemiga);
			//			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 200.0f;

			//		}
			//		else
			//		{
			//			ubicacionActualNaveEnemiga.X = 300.0f;
			//			ubicacionActualNaveEnemiga.Y = 0.0f;
			//		}

			//	}

			//	break;
			//}

			//	  if (NuevaNaveEnemiga)
			//	  {
			//		  NuevaNaveEnemiga->SetNombre("nave enemiga " + FString::FromInt(q));

			//		  // Aquí se asume que cada tipo de nave tiene un comportamiento de movimiento específico.
			//		  // Si todos los tipos de naves comparten la misma clase base con un método de movimiento, 
			//		  // entonces se podría usar polimorfismo para manejar el movimiento de cada nave.

			//		  NavesEnemigas.Add(NuevaNaveEnemiga);
			//	  }


			//1}



			//2}


			/*FTimerHandle FTHVisualizacionPosicionesNavesEnemigas;

			GetWorldTimerManager().SetTimer(FTHVisualizacionPosicionesNavesEnemigas, this, &AGalaga_USFX_L02GameMode::MostrarPosicionesNavesEnemigas, 1.0f, true); */


		//3}
	}
}
