// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L0_2GameMode.h"
#include "Galaga_USFX_L0_2Pawn.h"

AGalaga_USFX_L0_2GameMode::AGalaga_USFX_L0_2GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L0_2Pawn::StaticClass();
}

