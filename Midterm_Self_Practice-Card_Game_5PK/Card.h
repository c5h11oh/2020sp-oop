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
	// value 1~13; suit 1=±öªá club, 2=Æp¥Û diamond, 3=¬õ¤ß heart, 4=¶Â®ç spade

};

