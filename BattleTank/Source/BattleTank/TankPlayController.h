// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank *GetControlledTank() const;
	
	
};
