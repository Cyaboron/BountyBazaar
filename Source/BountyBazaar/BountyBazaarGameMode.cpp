// Copyright Epic Games, Inc. All Rights Reserved.

#include "BountyBazaarGameMode.h"
#include "BountyBazaarCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABountyBazaarGameMode::ABountyBazaarGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

UCharacterInventory* ABountyBazaarGameMode::GetCharacterInventory()
{
	return UCharacterInventory::GetInstance();
}