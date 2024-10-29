#pragma once

#include "raylib.h"
#include <string.h>
#include <stdlib.h>

/*
The type for defining different types of evidence. For simplicity's sake,
also can contain a short identifier for putting inside of a connections structure.
*/
typedef struct Evidence
{
	Texture2D tex;
	char* id[16];
	Vector2 location;
} Evidence;

/*
Function for making a new instance of Evidence. Pass in the path for the image path,
and the id for making it easy to recognise. the x and y are the positions on the screen
when on the pinboard screen. Caller has the responsibility of freeing.
Can only be called once an OpenGL context is active, 
as it uses raylib.h's `LoadTextureFromImage`.
The x, y coordinates are just initial ones. Recommended
to make them unique enough from eachother so the user can 
see whether there are multiple pieces of evidence that they 
can move.
*/
Evidence* MakeEvidence(const char* imgPath, const char* id, int x, int y);

/*
Free the resources for the Evidence. 
*/
void FreeEvidence(Evidence* pEvidence);
