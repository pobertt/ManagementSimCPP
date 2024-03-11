// Copyright Epic Games, Inc. All Rights Reserved.

#include "ManagementSimGameMode.h"
#include "ManagementSimCharacter.h"
#include "UObject/ConstructorHelpers.h"

AManagementSimGameMode::AManagementSimGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
