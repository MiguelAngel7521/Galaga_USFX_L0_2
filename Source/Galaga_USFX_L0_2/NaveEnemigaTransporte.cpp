// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"
void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	// En AProjectileEnemigo::BeginPlay o en su constructor
	

    static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	mallaNaveEnemiga->SetStaticMesh(Mesh.Object);
	TiempoDescarga = 10;
	ArmasDefensivas = 10;
	CapacidadCarga = 100;
}
void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	float NuevaX = FMath::RandRange(0.0f, 0.0f)*DeltaTime;
	float NuevaY = FMath::RandRange(0.0f, 0.0f)*DeltaTime;
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);
}
void ANaveEnemigaTransporte::DescargarContenido()
{
	//Descargar contenido
}
void ANaveEnemigaTransporte::ActivarArmasDefensivas()
{
	//Activar armas defensivas
}
void ANaveEnemigaTransporte::RecogerRecursos()
{
	//Recoger recursos
}
void ANaveEnemigaTransporte::IntercambiarRecursos()
{
	//Intercambiar recursos
}
void ANaveEnemigaTransporte::ReabastecerNaves()
{
	//Reabastecer naves
}

