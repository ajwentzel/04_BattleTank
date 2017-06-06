// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto AITank = GetControlledTank();

	if (AITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s Tank Controlled by AI"), *AITank->GetName())
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank not Found!!"))
	}
}

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

