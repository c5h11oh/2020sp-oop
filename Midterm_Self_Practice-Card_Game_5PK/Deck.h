#pragma once
#include "Hand.h"

class Deck {
public:
	Deck();
	const int N = 52;
	void Shuffle();
	int CardsLeft();
	Card DealCard();
	Hand DealHand(int numCards);
private:
	Card deck[52];
	int cardUsed;
	
};
