// // Copyright 2020 Lars Brestrich. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum EUnitState
{
	Idle	UMETA(DisplayName = "Idle"),
	Harvesting 	UMETA(DisplayName = "Harvesting"),
	Working 	UMETA(DisplayName = "Working"),
	Constructing 	UMETA(DisplayName = "Constructing"),
	Fighting	UMETA(DisplayName = "Fighting")
};
