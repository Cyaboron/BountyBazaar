// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CharacterInventory.h"
#include "GameFramework/GameModeBase.h"
#include "BountyBazaarGameMode.generated.h"

UCLASS(minimalapi)
class ABountyBazaarGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABountyBazaarGameMode();

	
	UFUNCTION(BlueprintCallable)
	UCharacterInventory* GetCharacterInventory();
};



