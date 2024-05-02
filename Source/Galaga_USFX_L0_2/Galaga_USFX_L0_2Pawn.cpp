// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L0_2Pawn.h"
#include "Galaga_USFX_L0_2Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Bomba.h"


const FName AGalaga_USFX_L0_2Pawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFX_L0_2Pawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFX_L0_2Pawn::FireForwardBinding("FireForward");
const FName AGalaga_USFX_L0_2Pawn::FireRightBinding("FireRight");

AGalaga_USFX_L0_2Pawn::AGalaga_USFX_L0_2Pawn()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
	bBombaSpawned = false;
	BombaClass = ABomba::StaticClass();


	OwningPlayer = nullptr;
	ReturnSpeed = 500.0f;
}

void AGalaga_USFX_L0_2Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{

	check(PlayerInputComponent);
	// set up gameplay key bindings
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
	PlayerInputComponent->BindAction("Spawn Bomba", IE_Pressed, this, &AGalaga_USFX_L0_2Pawn::SpawnBomba);
	UE_LOG(LogTemp, Warning, TEXT("Player Input Component Set"));



}

void AGalaga_USFX_L0_2Pawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
	if (!bBombaSpawned)
	{
		FVector PosicionPrueba = FVector(0.0f, -400.0f, 100);
		ABomba* NuevaBomba = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), PosicionPrueba, FRotator::ZeroRotator);
		if (NuevaBomba) {
			UE_LOG(LogTemp, Warning, TEXT("Bomba Spawned"));
			NuevaBomba->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
			bBombaSpawned = true;
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Bomba not spawned"));
		}
	}


	//aqui bomeran
	//if (OwningPlayer)
	//{
	//	const FVector DirectionToPlayer = (OwningPlayer->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	//	const FVector ReturnMovement = DirectionToPlayer * ReturnSpeed * DeltaSeconds;

	//	// Mover el proyectil hacia el jugador
	//	const FVector NewLocation = GetActorLocation() + ReturnMovement;
	//	SetActorLocation(NewLocation);

	//	// Comprobar si el proyectil ha llegado al jugador
	//	if (FVector::DistSquared(GetActorLocation(), OwningPlayer->GetActorLocation()) < 10000.0f) // 100 unidades de distancia al cuadrado
	//	{
	//		// Habilitar el disparo nuevamente en el jugador
	//		OwningPlayer->bCanFire = true;

	//		// Destruir el proyectil
	//		Destroy();
	//	}
	//}



}

void AGalaga_USFX_L0_2Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);



			//esat
			 
			//UWorld* const World = GetWorld();
			//if (World != nullptr)
			//{
			//	// spawn the projectile
			//	AGalaga_USFX_L0_2Projectile* NewProjectile = World->SpawnActor<AGalaga_USFX_L0_2Projectile>(SpawnLocation, FireRotation);

			//	if (NewProjectile)
			//	{
			//		NewProjectile->OwningPlayer = this; // Establecer la referencia al jugador
			//	}
			//}


			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGalaga_USFX_L0_2Projectile>(SpawnLocation, FireRotation);
			}



			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFX_L0_2Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			//bCanFire = false;
		}
	}
}

void AGalaga_USFX_L0_2Pawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AGalaga_USFX_L0_2Pawn::SpawnBomba()
{

	if (bBombaSpawned == false) {
		if (GetWorld())
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Bomba Spawned"));
			FVector SpawnLocation = GetActorLocation();
			FRotator SpawnRotation = GetActorRotation();

			// Utiliza la variable BombaClass para instanciar el objeto ABomba
			ABomba* NuevaBomba = GetWorld()->SpawnActor<ABomba>(BombaClass, SpawnLocation, SpawnRotation);
			// Spawnea un nuevo actor Bomba en la ubicación del actor actual

			if (NuevaBomba)
			{
				NuevaBomba->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
				bBombaSpawned = true;
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Bomba not Spawned"));
			}
		}
	}
}
void AGalaga_USFX_L0_2Pawn::RecibirDanio(int32 CantidadDanio)
{
	ReducirEnergia(CantidadDanio);

	// Si la energía del jugador llega a 0, reducir una vida y reiniciar la energía
	if (EnergiaJugador <= 0)
	{
		VidasJugador--;
		EnergiaJugador = 10; // Reiniciar la energía

		// Verificar si el jugador ha perdido todas sus vidas
		if (VidasJugador <= 0)
		{
			// Aquí puedes manejar la lógica para el fin del juego
			UE_LOG(LogTemp, Warning, TEXT("Juego Terminado"));
		}
	}
}

void AGalaga_USFX_L0_2Pawn::ReducirEnergia(int32 Cantidad)
{
	EnergiaJugador -= Cantidad;

	// Asegurarse de que la energía no baje de 0
	EnergiaJugador = FMath::Max(0, EnergiaJugador);
}
void AGalaga_USFX_L0_2Pawn::recibirImpacto()
{
	ContImpacto++;
	if (ContImpacto == 3)
	{
		ContImpacto = 0;
		ReducirVida();
	}
}
void AGalaga_USFX_L0_2Pawn::Energia()
{
	EnergiaJugador++;
	if (EnergiaJugador > 10)
	{
		EnergiaJugador = 10;
	}
}

