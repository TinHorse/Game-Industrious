// Fill out your copyright notice in the Description page of Project Settings.

#include "HelperQueue.h"

// Sets default values for this component's properties
UHelperQueue::UHelperQueue()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHelperQueue::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHelperQueue::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHelperQueue::addItem(int val)
{
	queue.Add(val);
}

int UHelperQueue::getFirstItem()
{
	int item = 0;
	if (queue.Num()) {
		item = queue[0];
	}
	return item;
}

void UHelperQueue::removeFirstItem()
{
	if (queue.Num()) {
		queue.RemoveAt(0);
	}
}

int UHelperQueue::getNumWorkers()
{
	int num_units = 0;
	for (auto item : queue) {
		if (item == 1) {
			num_units++;
		}
	}
	return num_units;
}

int UHelperQueue::getNumWingedWorkers()
{
	int num_units = 0;
	for (auto item : queue) {
		if (item == 3) {
			num_units++;
		}
	}
	return num_units;
}

int UHelperQueue::getNumTransports()
{
	int num_units = 0;
	for (auto item : queue) {
		if (item == 2) {
			num_units++;
		}
	}
	return num_units;
}

int UHelperQueue::getNumSaplings()
{
	int num_units = 0;
	for (auto item : queue) {
		if (item == 4) {
			num_units++;
		}
	}
	return num_units;
}

int UHelperQueue::getNumTreeSaplings()
{
	int num_units = 0;
	for (auto item : queue) {
		if (item == 6) {
			num_units++;
		}
	}
	return num_units;
}

int UHelperQueue::getNumTinheads()
{
	int num_units = 0;
	for (auto item : queue) {
		if (item == 5) {
			num_units++;
		}
	}
	return num_units;
}

void UHelperQueue::cancelWorkers()
{
	queue.Remove(1);
}

void UHelperQueue::cancelWingedWorkers()
{
	queue.Remove(3);
}

void UHelperQueue::cancelTransporters()
{
	queue.Remove(2);
}

void UHelperQueue::cancelSaplings()
{
	queue.Remove(4);
}

void UHelperQueue::cancelTreeSaplings()
{
	queue.Remove(6);
}

void UHelperQueue::cancelTinheads()
{
	queue.Remove(5);
}

float UHelperQueue::getRadioactiveMaterial()
{
	return RadioactiveMaterial;
}

void UHelperQueue::addRadioactiveMaterial(float val)
{
	RadioactiveMaterial += val;
}
