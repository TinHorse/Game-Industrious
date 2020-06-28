// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingBase.h"

// Sets default values
ABuildingBase::ABuildingBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuildingBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABuildingBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuildingBase::setUpdateRenderState(bool r)
{
	updateRenderState = r;
}

bool ABuildingBase::getUpdateRenderState()
{
	return updateRenderState;
}

void ABuildingBase::setCurrentRenderState(bool r)
{
	currentRenderState = r;
}

bool ABuildingBase::getCurrentRenderState()
{
	return currentRenderState;
}

void ABuildingBase::setPlayerOwner(int r)
{
	playerOwner = r;
}

int ABuildingBase::getPlayerOwner()
{
	return playerOwner;
}

void ABuildingBase::addWorkers(float val)
{
	workers += val;
}

void ABuildingBase::subtractWorkers(float val)
{
	workers -= val;
}

float ABuildingBase::getWorkers()
{
	return workers;
}

float ABuildingBase::getMaxWorkers()
{
	return max_workers;
}

void ABuildingBase::addMaxWorkers(float val)
{
	max_workers += val;
}

float ABuildingBase::getEfficiency()
{
	return float(workers) / float(max_workers);
}

int ABuildingBase::getHealth()
{
	return health;
}

void ABuildingBase::applyDamage(int dam)
{
	health -= dam;
	if (health <= 0) {
		Destroy();
	}
}
