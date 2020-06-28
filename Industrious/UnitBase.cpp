// Fill out your copyright notice in the Description page of Project Settings.

#include "UnitBase.h"

// Sets default values
AUnitBase::AUnitBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUnitBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnitBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUnitBase::setUpdateRenderState(bool r)
{
	updateRenderState = r;
}

bool AUnitBase::getUpdateRenderState()
{
	return updateRenderState;
}

void AUnitBase::setCurrentRenderState(bool r)
{
	currentRenderState = r;
}

bool AUnitBase::getCurrentRenderState()
{
	return currentRenderState;
}

void AUnitBase::setPlayerOwner(int r)
{
	playerOwner = r;
}

int AUnitBase::getPlayerOwner()
{
	return playerOwner;
}

void AUnitBase::setHealth(float val)
{
	health = val;
}

float AUnitBase::getHealth()
{
	return health;
}

void AUnitBase::setDamage(float val)
{
	damage = val;
}

void AUnitBase::addHealth(float val)
{
	health += val;
}

int AUnitBase::getDamage()
{
	return damage;
}

void AUnitBase::applyDamage(int dam)
{
	health -= dam;
}

// Called to bind functionality to input
void AUnitBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

