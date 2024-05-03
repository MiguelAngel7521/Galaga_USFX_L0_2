// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteArmas.h"
#include "NaveEnemigaCaza.h"

// Sets default values
AComponenteArmas::AComponenteArmas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//mallaArma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arma"));
	//RootComponent = mallaArma;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>mallaArma(TEXT("SkeletalMesh'/Game/FPS_Weapon_Bundle/Weapons/Meshes/KA74U/SK_KA74U_Y.SK_KA74U_Y'"));
	

}

void AComponenteArmas::DispararNave(ANaveEnemiga* Nave)
{
}

void AComponenteArmas::ConstruirNuevaNave()
{
	/*ANaveEnemigaCaza* Nave = GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass());
	Nave->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
	if (!Nave) {
		UE_LOG(LogTemp, Warning, TEXT("No se pudo construir la nave"));
	}*/
}

void AComponenteArmas::ConstruirMalla()
{
	
}

void AComponenteArmas::ConstruirMotor()
{


}

void AComponenteArmas::ConstruirComponentesArmas()
{


}

void AComponenteArmas::ConstruirComponentesEscudos()
{
}

void AComponenteArmas::ConstruirComponentesEnergia()
{
}

ANaveEnemiga* AComponenteArmas::ObtenerNaveEnemiga()
{
	return nullptr;
}

// Called when the game starts or when spawned
void AComponenteArmas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComponenteArmas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

