// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Galaga_USFX_L0_2Pawn.h"
#include "Galaga_USFX_L0_2Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ProjectileEnemigo.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaNaveEnemigaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaNaveEnemiga"));
	RootComponent = mallaNaveEnemiga;
	mallaNaveEnemiga->SetupAttachment(RootComponent);

	FireRate = 0.1f;
	bCanFire = true;

}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> ActoresColisionando;
	GetOverlappingActors(ActoresColisionando, AGalaga_USFX_L0_2Pawn::StaticClass());

	for (AActor* ActorColisionando : ActoresColisionando)
	{
		InfligirDanio(ActorColisionando);
	}

	// Lógica 


}
void ANaveEnemiga::InfligirDanio(AActor* ActorAfectado)
{
	AGalaga_USFX_L0_2Pawn* Jugador = Cast<AGalaga_USFX_L0_2Pawn>(ActorAfectado);

	if (Jugador)
	{
		Jugador->RecibirDanio(DanioEnemigo);
	}
}
void ANaveEnemiga::Disparar(FVector FireDirection)
{
	if (GetWorld())
	{
		FVector SpawnLocation = GetActorLocation();
		FRotator SpawnRotation = GetActorRotation();
		SpawnLocation.X -= 200;

		AProjectileEnemigo* NuevoProyectil = GetWorld()->SpawnActor<AProjectileEnemigo>(AProjectileEnemigo::StaticClass(), SpawnLocation, SpawnRotation);

		if (NuevoProyectil)
		{
			
			
			NuevoProyectil->ProjectileMovement->InitialSpeed = 2000.f;

		
			NuevoProyectil->SetOwner(this);
		}
	}
}

