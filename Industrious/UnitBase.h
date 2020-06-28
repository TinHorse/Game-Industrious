// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UnitBase.generated.h"

UCLASS()
class INDUSTRIOUS_API AUnitBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AUnitBase();

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
		float health; // owning player
	UPROPERTY(EditAnywhere, Category = "BaseStats")
		float damage; // owning player
		
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
	UFUNCTION(BlueprintCallable, Category = "BaseStats")
		void setHealth(float val);
	UFUNCTION(BlueprintCallable, Category = "BaseStats")
		float getHealth();
	UFUNCTION(BlueprintCallable, Category = "BaseStats")
		void setDamage(float val);
	UFUNCTION(BlueprintCallable, Category = "BaseStats")
		void addHealth(float val);
	UFUNCTION(BlueprintCallable, Category = "BaseStats")
		int getDamage();
	UFUNCTION(BlueprintCallable, Category = "BaseStats")
		void applyDamage(int dam);
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
