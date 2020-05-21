#include "Deck.h"

Deck::Deck() {
	for (int i = 0; i < Deck::N; ++i) {
		this->deck[i] = Card(i/13+1, i%13+1);
	}
	cardUsed = 0;
}

void Deck::Shuffle() {
	cardUsed = 0;
	std::random_shuffle(this->deck, this->deck+this->N);
}

int Deck::CardsLeft()
{
	return N-cardUsed;
}

Card Deck::DealCard()
{
	if (cardUsed < N) {
		return deck[cardUsed++];
	}
}

Hand Deck::DealHand(int numCards)
{
	Hand h;
	for (int i = 0; i < numCards; ++i) {
		h.addCard(Deck::DealCard());
	}
	return h;
}

