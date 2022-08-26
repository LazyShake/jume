// Copyright Epic Games, Inc. All Rights Reserved.

#include "jamGameMode.h"
#include "jamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AjamGameMode::AjamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
