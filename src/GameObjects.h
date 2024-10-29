#pragma once

#include "raylib.h"

#include "Evidence.h"

// ----- General ----------------------------------------------------------------------------------

/*
Enum type to represent the the current state of Braithwaite's face state.
Could be fun for adding more expressions!
*/
typedef enum EBraithwaiteFaceState
{
	BF_IDLE = 0,
	BF_TALK,
	BF_GRIMACE
	// TODO: Add more!
} EBraithwaiteFaceState;

// ----- Case 1 -----------------------------------------------------------------------------------

/*
Makes the evidence that contains the Butcher's mugshot.
*/
Evidence* MakeButcherMugshot(void);

/*
Makes a blank polaroid. Probably used for debugging purposes if I haven't
done the art for something yet. 
*/
Evidence* MakeBlankPolaroid(void);

/*
Makes the evidence with the polaroid photo of the knife and the blood found 
at the scene.
*/
Evidence* MakeKnifeBlood(void);

// TODO: Add the rest!

// ----- Case 2 -----------------------------------------------------------------------------------