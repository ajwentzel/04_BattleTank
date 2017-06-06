// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	PlayerTank = GetControlledTank();


	if (PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s Tank Controlled by player"), *PlayerTank->GetName())
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank not Found!!"))
	}

}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}