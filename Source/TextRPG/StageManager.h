// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Manager.h"
#include "StageManager.generated.h"

class Stage;

UENUM()
enum class EStageType
{
	Start,
	Dungeon,
	Village,
	Shop,
	Ending,
	Empty,
};

/**
 * 
 */
UCLASS()
class TEXTRPG_API UStageManager : public UManager
{
	GENERATED_BODY()
	
public:
	Stage* Stages[(int)EStageType::Empty];
};
