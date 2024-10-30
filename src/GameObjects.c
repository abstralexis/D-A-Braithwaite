#include "GameObjects.h"

Evidence* MakeButcherMugshot(void)
{
	return MakeEvidence(
		"./resources/polaroid-jc-mugshotx10.png",
		"butcher_mugshot",
		50,
		50
	);
}

Evidence* MakeBlankPolaroid(void)
{
	return MakeEvidence(
		"./resources/polaroidx10.png",
		"blank_polaroid",
		100,
		100
	);
}

Evidence* MakeKnifeBlood(void) {
	return MakeEvidence(
		"./resources/polaroid-knife-bloodx10.png",
		"knife_blood",
		150,
		150
	);
}

Texture2D MakePinTex(void)
{
	return LoadTexture("./resources/pinx5.png");
}

Evidence* MakeLargeReceipt(void)
{
	return MakeEvidence(
		"./resources/receipt.png",
		"receipt_note",
		200,
		200
	);
}

Texture2D MakeReceiptButtonTex(void)
{
	return LoadTexture("./resources/receipt-icon.png");
}

Texture2D MakeScene1BGTex(void)
{
	return LoadTexture("./resources/receipt-icon.png");
}
