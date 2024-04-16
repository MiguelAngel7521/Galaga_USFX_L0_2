// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "ProjectileEnemigo.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
   

    FireCooldown = 0.f;
}
ANaveEnemigaCaza::ANaveEnemigaCaza()
{
    UE_LOG(LogTemp, Warning, TEXT("AProjectileEnemigo BeginPlay or constructor called"));
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

   
    // Create fire direction vector

    FVector FireDirection = GetActorForwardVector();
    Disparar(FireDirection);
    // Actualizar el ProjectileMovement
   
    if (FireCooldown > 0.f)
    {
        FireCooldown -= DeltaTime;
    }
    else
    {
		FireCooldown = 0.f;
	}
}
void ANaveEnemigaCaza::mover(float DeltaTime)
{
    /*FVector PosicionActual = GetActorLocation();
    float NuevaX = FMath::RandRange(0.0f, 0.0f) * DeltaTime;
    float NuevaY = FMath::RandRange(0.0f, 0.0f) * DeltaTime;
    FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);*/

    FVector PosicionActual = GetActorLocation();

    //  letra "Z"
    static const TArray<FVector> Secuencia = {
        FVector(100, 400, 200),
        FVector(-500, -100, 200),
        FVector(-500, 400, 200),
        FVector(-500, 400, 200),
        FVector(-500, -100, 200),
        FVector(100, 400, 200),
    
       
    };

    // seguir la secuencia de puntos
    static int32 Indice = 0;
    static FVector ObjetivoZ = Secuencia[Indice];
    static const float Velocidadz = 100.0f;

    // 
    FVector Direccion = (ObjetivoZ - PosicionActual).GetSafeNormal();
    FVector Desplazamiento = Direccion * Velocidadz * DeltaTime;

    // 
    if (FVector::Dist(PosicionActual, ObjetivoZ) < 5.0f)
    {
        // siguiente punto de la secuencia
        Indice = (Indice + 1) % Secuencia.Num();
        ObjetivoZ = Secuencia[Indice];
    }
    else
    {
        
        SetActorLocation(PosicionActual + Desplazamiento);
    }
}

void ANaveEnemigaCaza::Disparar(FVector FireDirection)
{
    UE_LOG(LogTemp, Warning, TEXT("Disparando proyectil  "));

    if (GetWorld())
    {
      

        FVector SpawnLocation = GetActorLocation();
        FRotator SpawnRotation = GetActorRotation();
        SpawnLocation.X -= 200;

        AProjectileEnemigo* NuevoProyectil = GetWorld()->SpawnActor<AProjectileEnemigo>(AProjectileEnemigo::StaticClass(), SpawnLocation, SpawnRotation);

        if (NuevoProyectil)
        {
            UE_LOG(LogTemp, Warning, TEXT("Proyectil creado exitosamente"));

            // Verificar las propiedades de ProjectileMovement
            UE_LOG(LogTemp, Warning, TEXT("InitialSpeed: %f"), NuevoProyectil->ProjectileMovement->InitialSpeed);
            UE_LOG(LogTemp, Warning, TEXT("MaxSpeed: %f"), NuevoProyectil->ProjectileMovement->MaxSpeed);
            UE_LOG(LogTemp, Warning, TEXT("RotationFollowsVelocity: %d"), NuevoProyectil->ProjectileMovement->bRotationFollowsVelocity);
            UE_LOG(LogTemp, Warning, TEXT("ProjectileGravityScale: %f"), NuevoProyectil->ProjectileMovement->ProjectileGravityScale);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Fallo al crear el proyectil"));
        }
    }
}

//void ANaveEnemigaCaza::RecibirDanio(int32 CantidadDanio)
//{
//	//Disminuir escudo
//	escudo -= CantidadDanio;
//    if (escudo <= 0)
//    {
//		//Destruir nave
//		Destroy();
//	}
//}



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


