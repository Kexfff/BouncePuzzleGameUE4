// Copyright Epic Games, Inc. All Rights Reserved.

#include "BouncePuzzleGameGameMode.h"
#include "BouncePuzzleGameHUD.h"
#include "BouncePuzzleGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABouncePuzzleGameGameMode::ABouncePuzzleGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABouncePuzzleGameHUD::StaticClass();
}
