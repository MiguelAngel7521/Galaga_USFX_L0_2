// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

UCLASS()
class GALAGA_USFX_L0_2_API ABomba : public AActor
{
	GENERATED_BODY()
	
public:
    // Sets default values for this actor's properties
    ABomba();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* mallaBomba;

    // Se llama cada fotograma
    virtual void Tick(float DeltaTime) override;

    // Función para manejar la destrucción de la bomba
    void DestruirBomba();

protected:
    // Se llama cuando el juego comienza o cuando se crea el actor
    virtual void BeginPlay() override;

private:
    // Manejador de temporizador para la vida útil de la bomba
    FTimerHandle ManejadorTemporizador_DestruirBomba;
};
