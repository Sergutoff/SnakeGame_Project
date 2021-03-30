// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"
#include "SnakeBase.h"

AWall::AWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
}