#include "Evidence.h"

Evidence* MakeEvidence(const char* img_path, const char* id, int x, int y)
{
	Evidence* pEvidence = malloc(sizeof(Evidence));
	strcpy(pEvidence->id, id);

	Image image = LoadImage(img_path);
	Texture2D texture = LoadTextureFromImage(image);
	UnloadImage(image);
	pEvidence->tex = texture;

	pEvidence->location = (Vector2){ x, y };

	return pEvidence;
}

void FreeEvidence(Evidence* pEvidence)
{
	UnloadTexture(pEvidence->tex);
	free(pEvidence);
}
