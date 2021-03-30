// Fill out your copyright notice in the Description page of Project Settings.


#include "Arena.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"
#include "Wall.h"

// Sets default values
AArena::AArena()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	
	WallHeight = 1;
	WallWidht = 0.3;
}

// Called when the game starts or when spawned
void AArena::BeginPlay()
{
	Super::BeginPlay();
	FVector Origion;
	FVector Extend;
	GetActorBounds(false, Origion, Extend);

	FVector LeftWallLoc = Origion - FVector(Extend.X, 0, 0);
	FVector VerticalWallScale = FVector(WallWidht, Extend.Y * 0.02 + WallWidht, WallHeight);
	SpawnWallActor(LeftWallLoc, VerticalWallScale);

	FVector RightWallLoc = Origion + FVector(Extend.X, 0, 0);
	SpawnWallActor(RightWallLoc, VerticalWallScale);

	FVector UpWallLoc = Origion + FVector(0, Extend.Y, 0);
	FVector HorizontalWallScale = FVector(Extend.X * 0.02 + WallWidht, WallWidht, WallHeight);
	SpawnWallActor(UpWallLoc, HorizontalWallScale);

	FVector DownWallLoc = Origion - FVector(0, Extend.Y, 0);
	SpawnWallActor(DownWallLoc, HorizontalWallScale);
}

// Called every frame
void AArena::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArena::SpawnWallActor(FVector SpawnLocation, FVector SpawnScale)
{
	FTransform SpawnTransform = FTransform(FRotator(), SpawnLocation, SpawnScale);
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ADeadZoneActor* SpawnedWall = GetWorld()->SpawnActor<AWall>(WallActorClass, SpawnTransform, SpawnParams);
}

