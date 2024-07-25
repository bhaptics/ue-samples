// Copyright Epic Games, Inc. All Rights Reserved.

#include "sample5_3GameMode.h"
#include "sample5_3Character.h"
#include "UObject/ConstructorHelpers.h"

Asample5_3GameMode::Asample5_3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
