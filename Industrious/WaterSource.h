// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterSource.generated.h"

UCLASS()
class INDUSTRIOUS_API AWaterSource : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWaterSource();
	
	UPROPERTY(EditAnywhere, Category = "Growth")
		float irrigationEfficiency;
	UPROPERTY(EditAnywhere, Category = "Growth")
		float Fields;
	UPROPERTY(EditAnywhere, Category = "Growth")
		float MaxFields;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Growth")
		float getIrrigationEfficiency();
	
	UFUNCTION(BlueprintCallable, Category = "Growth")
		void setIrrigationEfficiency(float val);
	UFUNCTION(BlueprintCallable, Category = "Growth")
		float getFields();
	UFUNCTION(BlueprintCallable, Category = "Growth")
		void addFields(float val);
	UFUNCTION(BlueprintCallable, Category = "Growth")
		float getMaxFields();
		
		
};
