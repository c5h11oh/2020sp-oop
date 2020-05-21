#include "HotDogStand.h"
#include <iostream>
using namespace std;

int HotDogStand::totalSellAmount = 0;

HotDogStand::HotDogStand()
{
}

HotDogStand::HotDogStand(const char * id)
{
	HotDogStand::standId = id;
	HotDogStand::hotDogSellAmount = 0;
}

HotDogStand::HotDogStand(const char * id, int amount)
{
	HotDogStand::standId = id;
	HotDogStand::hotDogSellAmount = amount;
	HotDogStand::totalSellAmount += amount;
}


HotDogStand::~HotDogStand()
{
}

void HotDogStand::justSold()
{
	HotDogStand::hotDogSellAmount++;
	HotDogStand::totalSellAmount++;
}

void HotDogStand::print()
{
	cout << (HotDogStand::standId) << " " << (HotDogStand::hotDogSellAmount) << endl;
}

int HotDogStand::thisStandSoldAmount()
{
	return HotDogStand::hotDogSellAmount;
}

int HotDogStand::allStandSoldAmount()
{
	return HotDogStand::totalSellAmount;
}
