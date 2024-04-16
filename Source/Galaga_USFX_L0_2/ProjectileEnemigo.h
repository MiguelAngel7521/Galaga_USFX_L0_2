// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileEnemigo.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS()
class GALAGA_USFX_L0_2_API AProjectileEnemigo : public AActor
{
	GENERATED_BODY()
	
public:
    // Sets default values for this actor's properties
    AProjectileEnemigo();

    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Projectile movement component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
    class UProjectileMovementComponent* ProjectileMovement;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:

    UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
    class UStaticMeshComponent* ProjectileMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UProjectileMovementComponent* ProjectileMovementComponent;
};
