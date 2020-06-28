// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuildingBase.h"
#include "StorageBase.generated.h"

/**
 * 
 */
UCLASS()
class INDUSTRIOUS_API AStorageBase : public ABuildingBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Zinc;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Batteries;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Scrap;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Fuel;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Gears;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Tools;

	UPROPERTY(EditAnywhere, Category = "Resources")
		bool CanSupplyBuildingMaterial;
	UPROPERTY(EditAnywhere, Category = "Resources")
		bool CanHouseGlowworms; 
	UPROPERTY(EditAnywhere, Category = "Resources")
		bool CanSupplyIrrigation;
	
public:
	// GET functions
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getZinc();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getBatteries();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getScrap();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getFuel();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getTools();

	// SET functions
	UFUNCTION(BlueprintCallable, Category = "Resources")
		virtual void addZinc(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		virtual void addBatteries(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		virtual void addScrap(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		virtual void addFuel(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		virtual void addTools(float val);

	UFUNCTION(BlueprintCallable, Category = "Resources")
		bool getCanSupplyBuildingMaterial();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		void setCanSupplyBuildingMaterial(bool val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		bool getCanHouseGlowworms();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		void setCanHouseGlowworms(bool val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		bool getCanSupplyIrrigation();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		void setCanSupplyIrrigation(bool val);

	// LOADING
	UFUNCTION(BlueprintCallable, Category = "Loading")
		TArray<float> unloadAllToTransport();
	UFUNCTION(BlueprintCallable, Category = "Loading")
		virtual void loadAllFromTransport(float _Zinc, float _Batteries, float _scrap, float _radiocative_material);
};
