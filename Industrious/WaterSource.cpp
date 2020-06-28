// Fill out your copyright notice in the Description page of Project Settings.

#include "WaterSource.h"

// Sets default values
AWaterSource::AWaterSource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWaterSource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWaterSource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AWaterSource::getIrrigationEfficiency()
{
	return irrigationEfficiency;
}

void AWaterSource::setIrrigationEfficiency(float val)
{
	irrigationEfficiency = val;
}

float AWaterSource::getFields()
{
	return Fields;
}

void AWaterSource::addFields(float val)
{
	Fields += val;
}

float AWaterSource::getMaxFields()
{
	return MaxFields;
}

