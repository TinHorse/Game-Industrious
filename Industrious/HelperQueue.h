// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HelperQueue.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INDUSTRIOUS_API UHelperQueue : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHelperQueue();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Queue")
		TArray<int> queue;
	UPROPERTY(EditAnywhere, Category = "Queue")
		float RadioactiveMaterial;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void addItem(int val);
	UFUNCTION(BlueprintCallable, Category = "Queue")
		int getFirstItem();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void removeFirstItem();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		int getNumWorkers();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		int getNumWingedWorkers();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		int getNumTransports();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		int getNumSaplings();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		int getNumTreeSaplings();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		int getNumTinheads();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void cancelWorkers();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void cancelWingedWorkers();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void cancelTransporters();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void cancelSaplings();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void cancelTreeSaplings();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void cancelTinheads();
	UFUNCTION(BlueprintCallable, Category = "Queue")
		float getRadioactiveMaterial(); 
	UFUNCTION(BlueprintCallable, Category = "Queue")
		void addRadioactiveMaterial(float val);
		
};
