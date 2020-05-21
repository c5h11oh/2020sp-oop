#pragma once
#include <string>
#include <algorithm>

class Card
{
public:
	Card();
	Card(int _suit, int _value);
	int getSuit();
	int getValue();
	std::string ToString();
	std::string GetSuitAsString();
	std::string GetValueAsString();
private:
	int value;
	int suit;
	// value 1~13; suit 1=���� club, 2=�p�� diamond, 3=���� heart, 4=�®� spade

};

