// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_.h"

// Sets default values
AMyActor_::AMyActor_()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor_::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor_::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

