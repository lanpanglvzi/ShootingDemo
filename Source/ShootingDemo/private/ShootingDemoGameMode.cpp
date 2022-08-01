// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingDemoGameMode.h"
#include "ShootingDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingDemoGameMode::AShootingDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
