#pragma once
#include "Deck.h"
class Game
{
public:
	Game();
	void Play();
	void ShowHand(Hand& hand);
	int EvaluateHand(Hand& hand);
	void ShowCredits(int earn);
private:
	int gamesPlayed = 0;
	Card card;
	Hand hand;
	Deck deck;
	int cash = 100;
	int payTable[11]{ 0 };
	void setPayTable();
};

