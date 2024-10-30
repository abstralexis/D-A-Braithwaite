#include "Dialogue.h"

#include <stdlib.h>

DialogueScene* MakeButcherDialogue(void)
{
	DialogueScene* p = malloc(sizeof(DialogueScene));
	p->braithwaiteIdle = LoadTexture("./resources/dabraithwaite-idle-10x.png");
	p->braithwaiteGrimace = LoadTexture("./resources/dabraithwaite-Grimace-10x.png");
	p->braithwaiteTalk = LoadTexture("./resources/dabraithwaite-talk-10x.png");
	p->npcHappy = LoadTexture("./resources/butcher-smilex10.png");
	p->npcTalk = LoadTexture("./resources/butcher-talkx10.png");
	p->npcAngry = LoadTexture("./resources/butcher-angryx10.png");
	p->voiceLines = 12;
	p->currentLine = 0;
	
	// Dialogue
	char dialogue[32][512] = {
		"Hey boss, what can I get started for ya?",

		"Where were you last night?",

		"Last night? That ain't a cut I'm familiar with! Heh, I'm "
		"breakin' yer balls. I was in 'ere cleanin' up and I was "
		"hearin' these nasty screams. Woulda called the cops if this "
		"weren't mafia streets.",

		"Look John, I probably shouldn't be saying this but we have a "
		"lead on a 'John C.'. Not sayin' you did nothin', but you're a "
		"John C. that's familiar with knives.",

		"Bullshit you think I'd kill someone?! Honestly - Somethin' wrong in ya head?",

		"Do you recognise this knife?",

		"Oh yeah I've used one of those before. Ballgreens filleting knife. "
		"Can't hold an edge even if you cut nun' with it! There's blood "
		"everywhere too. Some complete amateur did this.",

		"Right. Want a cigarette?",

		"What, you think I smoke too? I value my craft in 'ere! "
		"I can't be ruining the meat!",

		"Of course, my apologies. Could you save a cut of belly for this afternoon?"
		"Haven't got my wallet on me.",

		"No problem boss! And hey, I hope you find who's done it.",

		"*** This John C. has an alibi, doesn't smoke, and thinks the guy "
		"who did it is an amateur. Makes sense given the paper trail and "
		"the cheap knife. Guess I'll have to check that neighbour for a lead. ***"
	};

}