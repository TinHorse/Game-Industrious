// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ResourceFieldBase.generated.h"

UCLASS()
class INDUSTRIOUS_API AResourceFieldBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResourceFieldBase();
	
	UPROPERTY(EditAnywhere, Category = "Num")
		int NumResources; // total number of Resource Units currently owned by this field
	UPROPERTY(EditAnywhere, Category = "Num")
		bool needsWater; // 
	UPROPERTY(EditAnywhere, Category = "Num")
		FVector prevLocation; // 
	UPROPERTY(EditAnywhere, Category = "Resources")
		TSubclassOf<class AResourceUnit> resource_class; // resource unit class
	UPROPERTY(EditAnywhere, Category = "Resources")
		TArray<class AResourceUnit*> resourceUnits; // container for resource units
	UPROPERTY(EditAnywhere, Category = "Water")
		TArray<class AWaterSource*> waterSources; // container for water sources in the area

	// Highlighting
	UPROPERTY(EditAnywhere, Category = "Rendering")
		bool updateRenderState; // update render state for highlighting
	UPROPERTY(EditAnywhere, Category = "Rendering")
		bool currentRenderState; // render state for highlighting
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Highlighting
	UFUNCTION(BlueprintCallable, Category = "Rendering")
		void setUpdateRenderState(bool r);
	UFUNCTION(BlueprintCallable, Category = "Rendering")
		bool getUpdateRenderState();
	UFUNCTION(BlueprintCallable, Category = "Rendering")
		void setCurrentRenderState(bool r);
	UFUNCTION(BlueprintCallable, Category = "Rendering")
		bool getCurrentRenderState();
	
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Growth")
		int getNumResources(); // executes growth for all resource units in the area
	UFUNCTION(BlueprintCallable, Category = "Growth")
		void grow(FVector randomLoc, FVector lastUnitLocation); // executes growth for all resource units in the area
	UFUNCTION(BlueprintCallable, Category = "Growth")
		void makeResourceUnit(FVector offset); // adds a new resource unit to the field
	UFUNCTION(BlueprintCallable, Category = "Water")
		bool addWaterSource(class AWaterSource* source); // adds a water source. Used to calculate growth
	UFUNCTION(BlueprintCallable, Category = "Water")
		bool removeWaterSource(class AWaterSource* source); // adds a water source. Used to calculate growth
	UFUNCTION(BlueprintCallable, Category = "Water")
		TArray<class AWaterSource*> getWaterSources(); // returns all stored water sources
	UFUNCTION(BlueprintCallable, Category = "Water")
		bool getNeedsWater(); // 
	UFUNCTION(BlueprintCallable, Category = "Water")
		FVector getPrevLocation(); // 
	UFUNCTION(BlueprintCallable, Category = "Water")
		void setPrevLocation(FVector loc); // 
	UFUNCTION(BlueprintCallable, Category = "Water")
		class AResourceUnit* getLastUnit(); // 
	
};
