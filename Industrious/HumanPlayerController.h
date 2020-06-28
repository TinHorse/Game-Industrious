// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HumanPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class INDUSTRIOUS_API AHumanPlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	// RESOURCES
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Zinc;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Scrap;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Fuel;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Tools;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float Batteries;

	// Population
	UPROPERTY(EditAnywhere, Category = "Population")
		float TotalWorkers;
	UPROPERTY(EditAnywhere, Category = "Population")
		float TotalTransporters;
	UPROPERTY(EditAnywhere, Category = "Population")
		float TotalSaplings;
	UPROPERTY(EditAnywhere, Category = "Population")
		float TotalTinheads;
	UPROPERTY(EditAnywhere, Category = "Population")
		float FuelNeedPerTinhead;
	UPROPERTY(EditAnywhere, Category = "Population")
		float FuelProduction;
	UPROPERTY(EditAnywhere, Category = "Resources")
		float BatteriesProduction;

	// COST
	UPROPERTY(EditAnywhere, Category = "Cost")
		float worker_cost;
	UPROPERTY(EditAnywhere, Category = "Cost")
		float wings_cost;
	UPROPERTY(EditAnywhere, Category = "Cost")
		float size_cost;
	UPROPERTY(EditAnywhere, Category = "Cost")
		float transporter_cost;
	UPROPERTY(EditAnywhere, Category = "Cost")
		float sapling_cost;

public:
	AHumanPlayerController();

	// RESOURCES
	UFUNCTION(BlueprintCallable, Category = "Resources")
		void addZinc(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getZinc();

	UFUNCTION(BlueprintCallable, Category = "Resources")
		void addBatteries(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getBatteries();

	UFUNCTION(BlueprintCallable, Category = "Resources")
		void addScrap(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getScrap();

	UFUNCTION(BlueprintCallable, Category = "Resources")
		void addFuel(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getFuel();

	UFUNCTION(BlueprintCallable, Category = "Resources")
		void addTools(float val);
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getTools();


	// POPULATION
	UFUNCTION(BlueprintCallable, Category = "Population")
		void addWorkers(int val);
	UFUNCTION(BlueprintCallable, Category = "Population")
		void addTransporters(int val);
	UFUNCTION(BlueprintCallable, Category = "Population")
		void addSaplings(int val);
	UFUNCTION(BlueprintCallable, Category = "Population")
		void addTinheads(int val);

	// PRODUCTION
	UFUNCTION(BlueprintCallable, Category = "Production")
		void SubtractFuelProduction();
	UFUNCTION(BlueprintCallable, Category = "Production")
		float getFuelProduction();
	UFUNCTION(BlueprintCallable, Category = "Production")
		void addFuelProduction(float val);

	UFUNCTION(BlueprintCallable, Category = "Resources")
		void SubtractBatteriesProduction();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getBatteriesProduction();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		void addBatteriesProduction(float val);

	// GET COST
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getWorkerCost();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getWingsCost();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getSizeCost();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getTransporterCost();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getSaplingCost();


	// GET UNITS
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getWorkers();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getTransporters();
	UFUNCTION(BlueprintCallable, Category = "Resources")
		float getSaplings();
};
