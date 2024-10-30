#pragma once

#include "raylib.h"
#include <stdlib.h>

typedef enum EEmotionSprite {
	ES_HAPPY_IDLE=0,
	ES_TALKING,
	ES_ANGRY_GRIMACE
} EEmotionSprite;

typedef struct DialogueScene
{
	// Braithwaite's sprites
	Texture2D braithwaiteIdle;
	Texture2D braithwaiteTalk;
	Texture2D braithwaiteGrimace;
	// The NPC's sprites
	Texture2D npcHappy;
	Texture2D npcTalk;
	Texture2D npcAngry;
	// The audio and sprite mappings
	size_t voiceLines;
	size_t currentLine;
	char linesText[32][512];
	Sound* dialogueArray[32];
	EEmotionSprite braithwaiteSpriteMap[32];
	EEmotionSprite npcSpriteMap[32];
} DialogueScene;

/*
Makes the dialogue scene for the butcher's dialogue
*/
DialogueScene* MakeButcherDialogue(void);

/*
Go to the next line in the scene. Returns true if the scene is over.
*/
bool NextLineInScene(const DialogueScene* p);

/*
Free dialogue resources
*/
void FreeDialogueResources(DialogueScene* p)