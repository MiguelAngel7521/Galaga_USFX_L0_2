// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileEnemigo.h"
#include "Galaga_USFX_L0_2Pawn.h"


AProjectileEnemigo::AProjectileEnemigo()
{
   
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaP(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));
	mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));//crea el objeto mallaProyectil
	mallaProyectil->SetStaticMesh(mallaP.Object);  //asigna la malla al objeto mallaProyectil
	mallaProyectil->SetupAttachment(RootComponent);//asigna el objeto mallaProyectil al componente raiz
	RootComponent = mallaProyectil; //asigna el objeto mallaProyectil al componente raiz
	mallaProyectil->BodyInstance.SetCollisionProfileName("Projectile");
	mallaProyectil->OnComponentHit.AddDynamic(this, &AProjectileEnemigo::OnHit);//asigna la funcion OnHit al objeto
	


	//ProjectileMesh->OnComponentHit.AddDynamic(this, &AEnemyProjectile::OnHit);  // set up a notification for when this component hits something
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = mallaProyectil;
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;//
	ProjectileMovement->bShouldBounce = false;//
	ProjectileMovement->ProjectileGravityScale = 0.0f; // No gravity

	// Set default damage
	Damage = 10.0f;
	InitialLifeSpan = 3.0f;
}

void AProjectileEnemigo::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
}

void AProjectileEnemigo::Fire()
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	SetActorLocation(NewLocation);
}

void AProjectileEnemigo::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	AGalaga_USFX_L0_2Pawn* Pawn = Cast<AGalaga_USFX_L0_2Pawn>(OtherActor);
	if (Pawn)
	{

		Pawn->ReducirVida();

		// Mostrar un mensaje informando al jugador sobre la p�rdida de vida
		FString Message = FString::Printf(TEXT("Vidas restantes: %d "), Pawn->GetVidasRestantes());
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, Message);
		//PawnScore += ScorePorEnemigo;


		// Llamar a la funci�n destruir de la nave enemiga
		Pawn->recibirImpacto();
	}
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
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

}
