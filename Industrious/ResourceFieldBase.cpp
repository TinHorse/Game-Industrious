// Fill out your copyright notice in the Description page of Project Settings.

#include "ResourceFieldBase.h"
#include "ResourceUnit.h"
#include "WaterSource.h"
#include "Engine/World.h"

// Sets default values
AResourceFieldBase::AResourceFieldBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	needsWater = true;
}

// Called when the game starts or when spawned
void AResourceFieldBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AResourceFieldBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AResourceFieldBase::setUpdateRenderState(bool r)
{
	updateRenderState = r;
}

bool AResourceFieldBase::getUpdateRenderState()
{
	return updateRenderState;
}

void AResourceFieldBase::setCurrentRenderState(bool r)
{
	currentRenderState = r;
}

bool AResourceFieldBase::getCurrentRenderState()
{
	return currentRenderState;
}

int AResourceFieldBase::getNumResources()
{
	return resourceUnits.Num();
}

void AResourceFieldBase::grow(FVector randomLoc, FVector lastUnitLocation)
{
	
	NumResources = resourceUnits.Num();

	if (NumResources < 20) {
		TArray<FVector> water;
		for (auto w : waterSources) {
			water.Add(w->GetActorLocation());
		}

		float water_availibility = 0;
		for (int i = 0; i < water.Num(); i++) {
			float dist = lastUnitLocation.Dist(water[i], lastUnitLocation);
			water_availibility += (1 / (dist / 500));
		}
		if (!needsWater) {
			water_availibility = 1;
		}

		float ran = FMath::FRand();
		if (ran < water_availibility) {
			makeResourceUnit(randomLoc);
			prevLocation = randomLoc;
		}
	}
	
}

void AResourceFieldBase::makeResourceUnit(FVector offset)
{
	
	FActorSpawnParameters params;
	params.bNoFail = true;
	params.Owner = this;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;


	FTransform transform;
	transform.SetLocation(offset);

	FVector rotation = {0,0,FMath::FRand()*3.6f };
	transform.SetRotation(rotation.ToOrientationQuat());

	AResourceUnit* unit = GetWorld()->SpawnActor<AResourceUnit>(resource_class, transform, params);
	resourceUnits.Add(unit);
	//float rand = FMath::FRandRange(1.f, 1.5f);
	unit->SetActorScale3D(FVector(FMath::FRandRange(1.f, 1.5f), FMath::FRandRange(1.f, 1.5f), FMath::FRandRange(0.2f, 0.4f)));
	
}

bool AResourceFieldBase::addWaterSource(AWaterSource * source)
{
	bool b = waterSources.Add(source);
	return b;
}

bool AResourceFieldBase::removeWaterSource(AWaterSource * source)
{
	bool b = waterSources.Remove(source);
	return b;
}

TArray<AWaterSource*> AResourceFieldBase::getWaterSources()
{
	return waterSources;
}


bool AResourceFieldBase::getNeedsWater()
{
	return needsWater;
}

FVector AResourceFieldBase::getPrevLocation()
{
	return prevLocation;
}

void AResourceFieldBase::setPrevLocation(FVector loc)
{
	prevLocation = loc;
}

AResourceUnit * AResourceFieldBase::getLastUnit()
{
	return resourceUnits.Last();
}

