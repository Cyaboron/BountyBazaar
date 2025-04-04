// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "FInventoryItem.h"
#include "CharacterInventory.generated.h"
/**
 * 
 */
UCLASS()
class BOUNTYBAZAAR_API UCharacterInventory : public UObject
{
	GENERATED_BODY()
private:
	static UCharacterInventory* _instance;
public:
    
	static UCharacterInventory* GetInstance();

	UFUNCTION(BlueprintCallable)
	void Print();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInventoryItem> InventoryItems;

	int InventorySize = 64;

	int InventoryRowSize = 8;

	UCharacterInventory();

	~UCharacterInventory();

    UFUNCTION(BlueprintCallable)
	void AddItem(FInventoryItemDefinition definition);
};

UCharacterInventory* UCharacterInventory::_instance = nullptr;