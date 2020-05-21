#include "Month.h"
#include <iostream>


Month::Month()
{
	Month::month = 1;
}

Month::Month(char first, char second, char third)
{
	switch (first)
	{
	case 'J':
		switch (second)
		{
		case 'u':
			switch (third)
			{
			case 'n':
				Month::month = 6;
				break;
			case 'l':
				Month::month = 7;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'F':
		switch (second)
		{
		case 'e':
			switch (third)
			{
			case 'b':
				Month::month = 2;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'M':
		switch (second)
		{
		case 'a':
			switch (third)
			{
			case 'r':
				Month::month = 3;
				break;
			case 'y':
				Month::month = 5;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'A':
		switch (second)
		{
		case 'p':
			switch (third)
			{
			case 'r':
				Month::month = 4;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		case 'u':
			switch (third)
			{
			case 'g':
				Month::month = 8;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'S':
		switch (second)
		{
		case 'e':
			switch (third)
			{
			case 'p':
				Month::month = 9;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'O':
		switch (second)
		{
		case 'c':
			switch (third)
			{
			case 't':
				Month::month = 10;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'N':
		switch (second)
		{
		case 'o':
			switch (third)
			{
			case 'v':
				Month::month = 11;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'D':
		switch (second)
		{
		case 'e':
			switch (third)
			{
			case 'c':
				Month::month = 12;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	default:
		Month::month = 1;
		break;
	}
}

Month::Month(int monthInt)
{
	if (monthInt>1 && monthInt<=12)
		Month::month = monthInt;
	else
		Month::month = 1;
}


Month::~Month()
{
}

void Month::inputInt()
{
	int monthInt;
	std::cin >> monthInt;
	if (monthInt > 1 && monthInt <= 12)
		Month::month = monthInt;
	else
		Month::month = 1;
}

void Month::inputStr()
{
	char input[3];
	for(int i=0; i<3; ++i)
		std::cin >> input[i];
	switch (input[0])
	{
	case 'J':
		switch (input[1])
		{
		case 'u':
			switch (input[2])
			{
			case 'n':
				Month::month = 6;
				break;
			case 'l':
				Month::month = 7;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'F':
		switch (input[1])
		{
		case 'e':
			switch (input[2])
			{
			case 'b':
				Month::month = 2;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'M':
		switch (input[1])
		{
		case 'a':
			switch (input[2])
			{
			case 'r':
				Month::month = 3;
				break;
			case 'y':
				Month::month = 5;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'A':
		switch (input[1])
		{
		case 'p':
			switch (input[2])
			{
			case 'r':
				Month::month = 4;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		case 'u':
			switch (input[2])
			{
			case 'g':
				Month::month = 8;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'S':
		switch (input[1])
		{
		case 'e':
			switch (input[2])
			{
			case 'p':
				Month::month = 9;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'O':
		switch (input[1])
		{
		case 'c':
			switch (input[2])
			{
			case 't':
				Month::month = 10;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'N':
		switch (input[1])
		{
		case 'o':
			switch (input[2])
			{
			case 'v':
				Month::month = 11;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	case 'D':
		switch (input[1])
		{
		case 'e':
			switch (input[2])
			{
			case 'c':
				Month::month = 12;
				break;
			default:
				Month::month = 1;
				break;
			}
			break;
		default:
			Month::month = 1;
			break;
		}
		break;
	default:
		Month::month = 1;
		break;
	}


}

void Month::outputInt()
{
	std::cout << Month::month;
}

void Month::outputStr()
{
	switch (Month::month)
	{
	case 1:
		std::cout << "Jan";
		break;
	case 2:
		std::cout << "Feb";
		break;
	case 3:
		std::cout << "Mar";
		break;
	case 4:
		std::cout << "Apr";
		break;
	case 5:
		std::cout << "May";
		break;
	case 6:
		std::cout << "Jun";
		break;
	case 7:
		std::cout << "Jul";
		break;
	case 8:
		std::cout << "Aug";
		break;
	case 9:
		std::cout << "Sep";
		break;
	case 10:
		std::cout << "Oct";
		break;
	case 11:
		std::cout << "Nov";
		break;
	case 12:
		std::cout << "Dec";
		break;
	default:
		std::cout << "Invalid"; 
		break;
	}
}

Month Month::nextMonth()
{
	return Month(Month::month+1);
}
