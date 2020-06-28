// Fill out your copyright notice in the Description page of Project Settings.

#include "HumanPlayerController.h"

AHumanPlayerController::AHumanPlayerController() {
	worker_cost = 10;
	transporter_cost = 50;
}

void AHumanPlayerController::addZinc(float val)
{
	Zinc += val;
}

float AHumanPlayerController::getZinc()
{
	return Zinc;
}

void AHumanPlayerController::addBatteries(float val)
{
	Batteries += val;
}

float AHumanPlayerController::getBatteries()
{
	return Batteries;
}

void AHumanPlayerController::addScrap(float val)
{
	Scrap += val;
}

float AHumanPlayerController::getScrap()
{
	return Scrap;
}
void AHumanPlayerController::addFuel(float val)
{
	Fuel += val;
}

float AHumanPlayerController::getFuel()
{
	return Fuel;
}

void AHumanPlayerController::addTools(float val)
{
	Tools += val;
}

float AHumanPlayerController::getTools()
{
	return Tools;
}


void AHumanPlayerController::addWorkers(int val)
{
	TotalWorkers += val;
}

void AHumanPlayerController::addTransporters(int val)
{
	TotalTransporters += val;	
}

void AHumanPlayerController::addSaplings(int val)
{
	TotalSaplings += val;
}

void AHumanPlayerController::addTinheads(int val)
{
	TotalTinheads += val;
}

void AHumanPlayerController::SubtractFuelProduction()
{
	Fuel += FuelProduction;
}

float AHumanPlayerController::getFuelProduction()
{
	return FuelProduction;
}

void AHumanPlayerController::addFuelProduction(float val)
{
	FuelProduction += val;
}

void AHumanPlayerController::SubtractBatteriesProduction()
{
	Batteries += BatteriesProduction;
}

float AHumanPlayerController::getBatteriesProduction()
{
	return BatteriesProduction;
}

void AHumanPlayerController::addBatteriesProduction(float val)
{
	BatteriesProduction += val;
}

float AHumanPlayerController::getWorkerCost()
{
	return worker_cost;
}

float AHumanPlayerController::getWingsCost()
{
	return wings_cost;
}

float AHumanPlayerController::getSizeCost()
{
	return size_cost;
}

float AHumanPlayerController::getTransporterCost()
{
	return transporter_cost;
}

float AHumanPlayerController::getSaplingCost()
{
	return sapling_cost;
}

float AHumanPlayerController::getWorkers()
{
	return TotalWorkers;
}

float AHumanPlayerController::getTransporters()
{
	return TotalTransporters;
}

float AHumanPlayerController::getSaplings()
{
	return TotalSaplings;
}
