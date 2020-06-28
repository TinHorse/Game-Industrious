// Fill out your copyright notice in the Description page of Project Settings.

#include "Colony.h"
#include "Placeholder.h"
#include "Engine/World.h"
#include "HumanPlayerController.h"

AColony::AColony()
{
	
}

void AColony::setup(AHumanPlayerController* controller)
{
	human_controller = controller;
}

AHumanPlayerController * AColony::getHumanController()
{
	return human_controller;
}

void AColony::addZinc(float val)
{
	human_controller->addZinc(val);
}

void AColony::addScrap(float val)
{
	human_controller->addScrap(val);
}

void AColony::addFuel(float val)
{
	human_controller->addFuel(val);
}

void AColony::addTools(float val)
{
	human_controller->addTools(val);
}

void AColony::addBatteries(float val)
{
	human_controller->addBatteries(val);
}

void AColony::addWings(float val)
{
	Wings += val;
}

float AColony::getWings()
{
	return Wings;
}

void AColony::setHumanController(AHumanPlayerController * control)
{
	human_controller = control;
}

void AColony::loadAllFromTransport(float _Zinc, float _Batteries, float _scrap, float _radiocative_material)
{
	human_controller->addZinc(_Zinc);
	human_controller->addBatteries(_Batteries);
	human_controller->addScrap(_scrap);
	human_controller->addFuel(_radiocative_material);
}
