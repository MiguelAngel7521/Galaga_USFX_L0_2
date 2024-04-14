// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"

// Sets default values
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBomba"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBombaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	if (MallaBombaAsset.Succeeded())
	{
		mallaBomba->SetStaticMesh(MallaBombaAsset.Object);
	}
	else
	{
		
		UE_LOG(LogTemp, Error, TEXT("No se pudo cargar el StaticMesh para la bomba."));
	}
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(ManejadorTemporizador_DestruirBomba, this, &ABomba::DestruirBomba, 3.0f, false);
	
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABomba::DestruirBomba()
{
	Destroy();
}

