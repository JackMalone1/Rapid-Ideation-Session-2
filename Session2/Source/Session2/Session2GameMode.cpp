// Copyright Epic Games, Inc. All Rights Reserved.

#include "Session2GameMode.h"
#include "Session2Character.h"
#include "UObject/ConstructorHelpers.h"

ASession2GameMode::ASession2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
