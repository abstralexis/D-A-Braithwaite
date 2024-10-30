#include "GameState.h"
#include "GameObjects.h"

GameState* InitGameState(void)
{
	// Init state
	GameState* pGameState = malloc(sizeof(GameState));
	pGameState->screenType = SCREEN_TITLE;

	// Alloc the evidence array
	struct Evidence* evidenceArray[EVIDENCE_MAX];
	for (int i = 0; i < EVIDENCE_MAX; i++)
	{
		evidenceArray[i] = malloc(sizeof(struct GameState));
	}
	memcpy(pGameState->collectedEvidence, evidenceArray, sizeof(evidenceArray));

	// Load textures (Can't be bothered to make a textures array)
	pGameState->pinTexture = MakePinTex();
	pGameState->sceneBackgroundTex = MakeScene1BGTex();
	pGameState->smallReceiptTex = MakeReceiptButtonTex();

	// Load audio here for now
	pGameState->testAudio = LoadSound("./resources/butcher-interaction-01.ogg");

	return pGameState;
}

void FreeGameState(GameState* state)
{
	// Free every single piece of evidence
	for (int i = 0; i < EVIDENCE_MAX; i++)
	{
		FreeEvidence(state->collectedEvidence[i]);
	}

	// Unload textures
	UnloadTexture(state->pinTexture);
	UnloadTexture(state->sceneBackgroundTex);
	UnloadTexture(state->smallReceiptTex);

	// Unload sounds
	UnloadSound(state->testAudio);

	// Free the state pointer
	free(state);
}
