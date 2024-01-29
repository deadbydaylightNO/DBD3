// Fill out your copyright notice in the Description page of Project Settings.


#include "TESTACTOR.h"

// Sets default values
ATESTACTOR::ATESTACTOR()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATESTACTOR::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATESTACTOR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

