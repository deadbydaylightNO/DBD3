// Copyright Epic Games, Inc. All Rights Reserved.

#include "DBD3GameMode.h"
#include "DBD3Character.h"
#include "UObject/ConstructorHelpers.h"

ADBD3GameMode::ADBD3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
