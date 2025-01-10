// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TextRPG_GameInstance.generated.h"

class UManager;
class APlayerCharacter;

UENUM()
enum class EManagerType
{
	Stage,
	Spawn,
	Battle,
	Shop,
	Sound,
	Empty,
};

/**
 * 
 */
UCLASS()
class TEXTRPG_API UTextRPG_GameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere)
	UManager* Managers[(int)EManagerType::Empty];

	UPROPERTY(EditAnywhere)
	APlayerCharacter* Player;
};
