// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBuilder.h"
#include "DirectorBuilder.generated.h"

UCLASS()
class GALAGA_USFX_L0_2_API ADirectorBuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	INaveEnemigaBuilder* builder;
public:
	void setBuilder(INaveEnemigaBuilder* newBuilder);
	ANaveEnemigaCaza* construirNaveEnemiga();
};

