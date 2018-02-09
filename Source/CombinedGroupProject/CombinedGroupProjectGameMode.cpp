// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CombinedGroupProjectGameMode.h"
#include "CombinedGroupProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombinedGroupProjectGameMode::ACombinedGroupProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/AnimStarterPack/Ue4ASP_Character"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
