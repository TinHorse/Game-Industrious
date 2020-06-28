// Fill out your copyright notice in the Description page of Project Settings.

#include "StorageBase.h"

float AStorageBase::getZinc()
{
	return Zinc;
}

float AStorageBase::getBatteries()
{
	return Batteries;
}

float AStorageBase::getScrap()
{
	return Scrap;
}

float AStorageBase::getFuel()
{
	return Fuel;
}

float AStorageBase::getTools()
{
	return Tools;
}

void AStorageBase::addZinc(float val)
{
	Zinc += val;
}

void AStorageBase::addBatteries(float val)
{
	Batteries += val;
}

void AStorageBase::addScrap(float val)
{
	Scrap += val;
}

void AStorageBase::addFuel(float val)
{
	Fuel += val;
}

void AStorageBase::addTools(float val)
{
	Tools += val;
}

bool AStorageBase::getCanSupplyBuildingMaterial()
{
	return CanSupplyBuildingMaterial;
}

void AStorageBase::setCanSupplyBuildingMaterial(bool val)
{
	CanSupplyBuildingMaterial = val;
}

bool AStorageBase::getCanHouseGlowworms()
{
	return CanHouseGlowworms;
}

void AStorageBase::setCanHouseGlowworms(bool val)
{
	CanHouseGlowworms = val;
}

bool AStorageBase::getCanSupplyIrrigation()
{
	return CanSupplyIrrigation;
}

void AStorageBase::setCanSupplyIrrigation(bool val)
{
	CanSupplyIrrigation = val;
}



TArray<float> AStorageBase::unloadAllToTransport()
{
	TArray<float> resources;
	resources.Add(Fuel);
	resources.Add(Scrap);
	resources.Add(Zinc);
	resources.Add(Batteries);

	return resources;
}

void AStorageBase::loadAllFromTransport(float _Zinc, float _Batteries, float _scrap, float _radiocative_material)
{
	Zinc += _Zinc;
	Batteries += _Batteries;
	Scrap += _scrap;
	Fuel += _radiocative_material;
}
