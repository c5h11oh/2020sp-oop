#include "Hand.h"
//#include <algorithm>

Hand::Hand()
{
}

const std::vector<Card>& Hand::getHandCards()
{
	return handCard;
}

void Hand::Clear() {
	this->handCard.clear();
}

void Hand::addCard(Card c)
{
	if (this->handCard.size() <= 5) {
		handCard.push_back(c);
	}
}

void Hand::sortBySuit() {
	struct {
		bool operator()(Card a, Card b) {
			return a.getSuit() < b.getSuit();
		}
	} custom;
	std::sort(handCard.begin(), handCard.end(), custom);
}

void Hand::sortByValue()
{
	struct {
		bool operator()(Card a, Card b) {
			return a.getValue() < b.getValue();
		}
	} custom;
	std::sort(handCard.begin(), handCard.end(), custom);
}
