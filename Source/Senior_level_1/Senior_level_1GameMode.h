// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Senior_level_1GameMode.generated.h"


UENUM(BlueprintType)
enum class EPatrolPathOutcome : uint8 {
    Loop,
    Return,
    None
};

UCLASS(minimalapi)
class ASenior_level_1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASenior_level_1GameMode();
};



