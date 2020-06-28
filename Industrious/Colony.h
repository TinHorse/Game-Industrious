// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StorageBase.h"
#include "Colony.generated.h"

/**
 * 
 */
UCLASS()
class INDUSTRIOUS_API AColony : public AStorageBase
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, Category = "Controller")
		class AHumanPlayerController* human_controller;

	UPROPERTY(EditAnywhere, Category = "Buildings")
		TArray<class ABuildingBase*> buildings;
	UPROPERTY(EditAnywhere, Category = "Buildings")
		TArray<class APlaceholder*> placeholders;

	UPROPERTY(EditAnywhere, Category = "Buildings")
		TSubclassOf<class APlaceholder> placeholderClass;

	UPROPERTY(EditAnywhere, Category = "Resources")
		float Wings;
	

	FActorSpawnParameters buildingSpawnParameters;
	TArray <FTransform> buildingSpawnTransforms;

public:
	AColony();
	UFUNCTION(BlueprintCallable, Category = "Setup")
		void setup(class AHumanPlayerController* controller);
	UFUNCTION(BlueprintCallable, Category = "Setup")
		class AHumanPlayerController* getHumanController();

	// ADD TO CONTROLLER
	void addZinc(float val) override;
	void addScrap(float val) override;
	void addFuel(float val) override;
	void addTools(float val) override;
	void addBatteries(float val) override;

	UFUNCTION(BlueprintCallable, Category = "Resources")
		void addWings(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getWings();

	UFUNCTION(BlueprintCallable, Category = "Setup")
		void setHumanController(class AHumanPlayerController* control);

	void loadAllFromTransport(float _Zinc, float _Batteries, float _scrap, float _radiocative_material) override;
};
