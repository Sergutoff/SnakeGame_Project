// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DeadZoneActor.h"
#include "Wall.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API AWall : public ADeadZoneActor
{
	GENERATED_BODY()

public:
	AWall();

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
	UStaticMeshComponent* MeshComponent;
};
