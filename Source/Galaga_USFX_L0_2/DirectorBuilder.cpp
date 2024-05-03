// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorBuilder.h"

// Sets default values
ADirectorBuilder::ADirectorBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorBuilder::setBuilder(INaveEnemigaBuilder* newBuilder)
{
}

ANaveEnemigaCaza* ADirectorBuilder::construirNaveEnemiga()
{
	return nullptr;
}

