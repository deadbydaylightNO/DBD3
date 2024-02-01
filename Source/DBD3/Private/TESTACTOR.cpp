// Fill out your copyright notice in the Description page of Project Settings.


#include "TESTACTOR.h"
#include "../../../../../../../Source/Runtime/Engine/Classes/Components/BoxComponent.h"
#include "../../../../../../../Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values
ATESTACTOR::ATESTACTOR()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("boxComp"));
	this->SetRootComponent(boxComp);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("meshComp"));
	meshComp -> SetupAttachment(boxComp);
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

