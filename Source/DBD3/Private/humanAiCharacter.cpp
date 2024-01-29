// Fill out your copyright notice in the Description page of Project Settings.


#include "humanAiCharacter.h"

// Sets default values
AhumanAiCharacter::AhumanAiCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AhumanAiCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AhumanAiCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AhumanAiCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

