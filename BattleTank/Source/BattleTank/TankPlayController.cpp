// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayController.h"

ATank *ATankPlayController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


