// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arena.generated.h"

class AWall;

UCLASS()
class SNAKEGAME_API AArena : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArena();
    
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(BlueprintReadWrite)
	AWall* WallActor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AWall> WallActorClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

    void SpawnWallActor(FVector SpawnLocation, FVector SpawnScale);
	float WallHeight;
	float WallWidht;
};
