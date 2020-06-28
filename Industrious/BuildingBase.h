// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildingBase.generated.h"

UCLASS()
class INDUSTRIOUS_API ABuildingBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildingBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = "Rendering")
		bool updateRenderState; // update render state for highlighting
	UPROPERTY(EditAnywhere, Category = "Rendering")
		bool currentRenderState; // render state for highlighting
	UPROPERTY(EditAnywhere, Category = "Player")
		int playerOwner; // owning player
	UPROPERTY(EditAnywhere, Category = "BaseStats")
		int health; // owning player

	UPROPERTY(EditAnywhere, Category = "Workers")
		float workers; // workers currently working in this building
	UPROPERTY(EditAnywhere, Category = "Workers")
		float max_workers; // maximum number of workers
	UPROPERTY(EditAnywhere, Category = "Eficiency")
		float efficiency; // current efficiency

		

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Highlighting
	UFUNCTION(BlueprintCallable, Category = "Rendering")
		void setUpdateRenderState(bool r);
	UFUNCTION(BlueprintCallable, Category = "Rendering")
		bool getUpdateRenderState();
	UFUNCTION(BlueprintCallable, Category = "Rendering")
		void setCurrentRenderState(bool r);
	UFUNCTION(BlueprintCallable, Category = "Rendering")
		bool getCurrentRenderState();

	// Owning Player
	UFUNCTION(BlueprintCallable, Category = "Player")
		void setPlayerOwner(int r);
	UFUNCTION(BlueprintCallable, Category = "Player")
		int getPlayerOwner();

	// Workers
	UFUNCTION(BlueprintCallable, Category = "Workers")
		void addWorkers(float val);
	UFUNCTION(BlueprintCallable, Category = "Workers")
		void subtractWorkers(float val);
	UFUNCTION(BlueprintCallable, Category = "Workers")
		float getWorkers();
	UFUNCTION(BlueprintCallable, Category = "Workers")
		float getMaxWorkers();
	UFUNCTION(BlueprintCallable, Category = "Workers")
		void addMaxWorkers(float val);
	UFUNCTION(BlueprintCallable, Category = "Efficiency")
		float getEfficiency();

	// Base Stats
	UFUNCTION(BlueprintCallable, Category = "BaseStats")
		int getHealth();
	UFUNCTION(BlueprintCallable, Category = "BaseStats")
		void applyDamage(int dam);
};
