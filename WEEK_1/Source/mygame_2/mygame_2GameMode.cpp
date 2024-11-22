// Copyright Epic Games, Inc. All Rights Reserved.

#include "mygame_2GameMode.h"
#include "mygame_2Character.h"
#include "UObject/ConstructorHelpers.h"

Amygame_2GameMode::Amygame_2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
