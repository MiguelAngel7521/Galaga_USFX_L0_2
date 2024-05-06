// Fill out your copyright notice in the Description page of Project Settings.


#include "CapVelocidad.h"
#include "Galaga_USFX_L0_2Pawn.h"

ACapVelocidad::ACapVelocidad()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaC(TEXT("StaticMesh'/Game/TwinStick/Meshes/HealthCapsule.HealthCapsule'"));
	mallaCapsula->SetStaticMesh(mallaC.Object);
	mallaCapsula->BodyInstance.SetCollisionProfileName("Capsule");
}

void ACapVelocidad::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalaga_USFX_L0_2Pawn* Pawn= Cast<AGalaga_USFX_L0_2Pawn>(OtherActor);
	if(Pawn)
	{
		Pawn->AumentarVelocidad();
		Destroy();
	}
}