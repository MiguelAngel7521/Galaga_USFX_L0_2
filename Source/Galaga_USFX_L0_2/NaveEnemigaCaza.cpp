// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
}
ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(Mesh.Object);;
	HiperVelocidad = 1500;
	NumeroMisiles = 10;
	RayosLaserActivos = false;
	DanoRayoLaser = 10;
	TiempoEntreRayosLaser = 1;
}
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	mover(DeltaTime);
}
void ANaveEnemigaCaza::mover(float DeltaTime)
{
    FVector PosicionActual = GetActorLocation();

    // Define una secuencia de puntos para dibujar la letra "Z"
    static const TArray<FVector> SecuenciaZ = {
        FVector(0, 1000, 200),
        FVector(100, 500, 200),
        FVector(100, 1000, 200),
       
    };

    // Variables para seguir la secuencia de puntos
    static int32 IndiceActual = 0;
    static FVector Objetivo = SecuenciaZ[IndiceActual];
    static const float Velocidad = 100.0f;

    // Calcula el vector de dirección hacia el próximo punto de la secuencia
    FVector Direccion = (Objetivo - PosicionActual).GetSafeNormal();
    FVector Desplazamiento = Direccion * Velocidad * DeltaTime;

    // Comprueba si la nave ha alcanzado el objetivo
    if (FVector::Dist(PosicionActual, Objetivo) < 5.0f)
    {
        // Cambia al siguiente punto de la secuencia
        IndiceActual = (IndiceActual + 1) % SecuenciaZ.Num();
        Objetivo = SecuenciaZ[IndiceActual];
    }
    else
    {
        // Mueve la nave hacia el objetivo
        SetActorLocation(PosicionActual + Desplazamiento);
    }
}
void ANaveEnemigaCaza::ActivarRayoLaser()
{
	RayosLaserActivos = true;
}
void ANaveEnemigaCaza::DescativarRayoLaser()
{
	RayosLaserActivos = false;
}
void ANaveEnemigaCaza::DispararRayoLaser()
{
	if (RayosLaserActivos)
	{
		//Disparar rayo laser
	}
}
void ANaveEnemigaCaza::DispararMisiles()
{
	if (NumeroMisiles > 0)
	{
		//Disparar misiles
		NumeroMisiles--;
	}
}

