#include "Card.h"
#include <string>

Card::Card()
{
	this->suit = 1;
	this->value = 1;
}

Card::Card(int _suit, int _value): suit(_suit), value(_value)
{
}

int Card::getSuit()
{
	return this->suit;
}

int Card::getValue()
{
	return this->value;
}

std::string Card::ToString()
{
	std::string a;
	switch (this->suit)
	{
	case 1:
		a += "±öªá ";
		break;
	case 2:
		a += "Æp¥Û ";
		break;
	case 3:
		a += "¬õ¤ß ";
		break;
	case 4:
		a += "¶Â®ç ";
		break;
	default:
		break;
	}

	if (this->value == 1) a += "A";
	else if (this->value == 11) a += "J";
	else if (this->value == 12) a += "Q";
	else if (this->value == 13) a += "K";
	else a += std::to_string(this->value);

	return a;
}

std::string Card::GetSuitAsString()
{
	std::string a;
	switch (this->suit)
	{
	case 1:
		a += "±öªá ";
		break;
	case 2:
		a += "Æp¥Û "; 
		break;
	case 3:
		a += "¬õ¤ß ";
		break;
	case 4:
		a += "¶Â®ç ";
		break;
	default:
		break;
	}
	return a;
}

std::string Card::GetValueAsString()
{
	std::string a(std::to_string(this->value));
	return a;
}
