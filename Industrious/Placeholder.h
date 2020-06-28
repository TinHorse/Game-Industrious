// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Placeholder.generated.h"

UCLASS()
class INDUSTRIOUS_API APlaceholder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlaceholder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Rendering")
		bool updateRenderState; // update render state for highlighting
	UPROPERTY(EditAnywhere, Category = "Rendering")
		bool currentRenderState; // render state for highlighting

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

};
