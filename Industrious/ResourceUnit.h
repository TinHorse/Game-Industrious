// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ResourceUnit.generated.h"

UCLASS()
class INDUSTRIOUS_API AResourceUnit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResourceUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Growth")
		bool hasGrown; // bool for checking whether this resource has already grown neighbours


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(Category = "Growth")
		bool getHasGrown(); // returns hasGrown bool
	
};
