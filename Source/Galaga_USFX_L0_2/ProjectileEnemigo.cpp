// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileEnemigo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"


AProjectileEnemigo::AProjectileEnemigo()
{
   
    PrimaryActorTick.bCanEverTick = true;

   
    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    RootComponent = ProjectileMesh;

 
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

    if (ProjectileMeshAsset.Succeeded())
    {
        ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load projectile mesh"));
    }

   
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->UpdatedComponent = ProjectileMesh;
    ProjectileMovement->InitialSpeed = 1000.f;
    ProjectileMovement->MaxSpeed = 1000.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = false;
    ProjectileMovement->ProjectileGravityScale = 0.f; 


  
    InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void AProjectileEnemigo::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AProjectileEnemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // Actualizar el ProjectileMovement
    if (ProjectileMovement)
    {
        ProjectileMovement->TickComponent(DeltaTime, ELevelTick::LEVELTICK_All, nullptr);
        UE_LOG(LogTemp, Warning, TEXT("Posición del proyectil: %s"), *GetActorLocation().ToString());
    }
}
