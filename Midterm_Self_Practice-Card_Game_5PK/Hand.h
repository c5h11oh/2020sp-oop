#pragma once
#include "Card.h"
#include <vector>
class Hand
{
public:	
	Hand();
	const std::vector<Card>& getHandCards();
	void Clear();
	void addCard(Card c);
	void sortBySuit();
	void sortByValue();
private:
	std::vector<Card> handCard;
};

