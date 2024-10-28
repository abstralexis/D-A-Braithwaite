#pragma once

#include "Evidence.h"
#include <stdlib.h>

/*
The enum class for all the types of screens the player will see. I am not sure on
a better implementation for this. Perhaps I could make enums by level? who knows.
They're just aliases and I'm the only dev. Cry.
*/
typedef enum EScreenType {
    SCREEN_TITLE = 0,
    SCREEN_C1_INTRO,
    SCREEN_C1_BUTCHER,
    SCREEN_C1_NEIGHBOUR,
    SCREEN_C1_PINBOARD,
    SCREEN_C1_SCENE,
    SCREEN_WIN,
    SCREEN_FAIL,
    SCREEN_CREDITS
} EScreenType;

#define EVIDENCE_MAX 16

/*
Struct for representing game state.
*/
typedef struct GameState 
{
    // The current screen that the game is displaying
    EScreenType screenType;
    // The evidence that has been so far collected.
    // Pointer to an array of pointers to Evidence.
    Evidence* collectedEvidence[EVIDENCE_MAX];
} GameState;

/*
Default Game State constructor. It is up to the caller to free using `FreeGameState()`.
*/
GameState* InitGameState(void);

/*
Frees up the game state resources.
*/
void FreeGameState(GameState* state);