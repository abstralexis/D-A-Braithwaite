#include "GameObjects.h"

Evidence* MakeButcherMugshot(void)
{
	return MakeEvidence(
		"../resources/polaroid-jc-mugshotx10.png",
		"butcher_mugshot",
		50,
		50
	);
}

Evidence* MakeBlankPolaroid(void)
{
	return MakeEvidence(
		"../resources/polaroidx10.png",
		"blank_polaroid",
		100,
		100
	);
}

Evidence* MakeKnifeBlood(void) {
	return MakeEvidence(
		"../resources/polaroid-knife-bloodx10.png",
		"knife_blood",
		150,
		150
	);
}