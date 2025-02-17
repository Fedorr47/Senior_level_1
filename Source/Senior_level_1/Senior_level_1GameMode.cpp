// Copyright Epic Games, Inc. All Rights Reserved.

#include "Senior_level_1GameMode.h"
#include "Senior_level_1Character.h"
#include "UObject/ConstructorHelpers.h"

ASenior_level_1GameMode::ASenior_level_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
