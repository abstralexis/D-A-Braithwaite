#include "GameState.h"
#include "GameObjects.h"

GameState* InitGameState(void)
{
	GameState* pGameState = malloc(sizeof(GameState));
	pGameState->screenType = SCREEN_TITLE;

	struct Evidence* evidenceArray[EVIDENCE_MAX];
	for (int i = 0; i < EVIDENCE_MAX; i++)
	{
		evidenceArray[i] = malloc(sizeof(struct GameState));
	}
	memcpy(pGameState->collectedEvidence, evidenceArray, sizeof(evidenceArray));

	pGameState->pinTexture = MakePinTex();

	return pGameState;
}

void FreeGameState(GameState* state)
{
	for (int i = 0; i < EVIDENCE_MAX; i++)
	{
		free(state->collectedEvidence[i]);
	}
	free(state);
}
