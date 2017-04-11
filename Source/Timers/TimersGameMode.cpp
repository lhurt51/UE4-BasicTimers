// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Timers.h"
#include "TimersGameMode.h"
#include "TimersHUD.h"
#include "TimersCharacter.h"

ATimersGameMode::ATimersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATimersHUD::StaticClass();
}
