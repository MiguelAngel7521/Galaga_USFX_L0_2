// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteEscudo.h"
#include "NaveEnemiga.h"

// Sets default values
AComponenteEscudo::AComponenteEscudo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AComponenteEscudo::ConstruirNuevaNave()
{
	/*ANaveEnemiga* Nave = GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass());
	Nave->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	if (!Nave) {
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir la nave"));
	}*/
}

void AComponenteEscudo::ConstruirMalla()
{
	//mallaEscudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Escudo"));
	//RootComponent = mallaEscudo;
	/*static ConstructorHelpers::FObjectFinder<UStaticMesh>mallaEscudo(TEXT("SkeletalMesh'/Game/FPS_Weapon_Bundle/Weapons/Meshes/KA74U/SK_KA74U_Y.SK_KA74U_Y'"));*/
}

void AComponenteEscudo::ConstruirMotor()
{
}

void AComponenteEscudo::ConstruirComponentesArmas()
{
}

void AComponenteEscudo::ConstruirComponentesEscudos()
{
}

void AComponenteEscudo::ConstruirComponentesEnergia()
{
}

ANaveEnemiga* AComponenteEscudo::ObtenerNaveEnemiga()
{
	return nullptr;
}

// Called when the game starts or when spawned
void AComponenteEscudo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComponenteEscudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

