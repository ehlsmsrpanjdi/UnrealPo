// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModularCarGameMode.h"
#include "ModularCarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AModularCarGameMode::AModularCarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
