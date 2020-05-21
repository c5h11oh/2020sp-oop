#include "Game.h"
#include <iostream>

Game::Game()
{
	setPayTable();
}

void Game::Play()
{
	int earn = 0;
	int runTimes = 10000;
	while (runTimes) {
		deck.Shuffle();
		hand = deck.DealHand(5);
		/*
		hand.Clear();
		hand.addCard(Card(4, 5));
		hand.addCard(Card(4, 8));
		hand.addCard(Card(1, 9));
		hand.addCard(Card(4, 13));
		hand.addCard(Card(4, 4));
		*/
		hand.sortByValue();
		ShowHand(hand);
		earn = EvaluateHand(hand);
		ShowCredits(earn);
		runTimes--;
	}
}

void Game::ShowHand(Hand& hand)
{
	for (auto x : hand.getHandCards()) {
		std::cout << x.ToString() << "\n";
	}
}

int Game::EvaluateHand(Hand & hand)
{
	bool sameSuit = true, consecutive = true;
	short count[13]{ 0 }, countcount[3]{ 0 };
	//hand.sortByValue();
	std::vector<Card> eva = hand.getHandCards();
	
	for (auto it = eva.begin(); it != eva.end()-1; ++it) {
		if (it->getSuit() != (it+1)->getSuit()) {
			sameSuit = false;
			break;
		}
	}

	if (eva.at(0).getValue() == 1 && eva.at(1).getValue() == 10) {
		for (auto it = eva.begin()+1; it != eva.end() - 1; ++it) {
			if (it->getValue() + 1 != (it + 1)->getValue()) {
				consecutive = false;
				break;
			}
		}
	}else{
		for (auto it = eva.begin(); it != eva.end() - 1; ++it) {
			if (it->getValue()+1 != (it + 1)->getValue()) {
				consecutive = false;
				break;
			}
		}
	}
	//是連續的可以決定成績了
	if (consecutive) {
		if (sameSuit) {
			if (eva.at(0).getValue() == 1 && eva.at(1).getValue() == 10) return this->payTable[0];
			else return this->payTable[1];
		}
		else {
			return this->payTable[5];
		}
	}

	//非連續
	for (auto it = eva.begin(); it != eva.end(); ++it) {
		count[it->getValue() - 1]++;
	}
	for (auto x : count) {
		if (x == 4) countcount[0]++;
		else if (x == 3) countcount[1]++;
		else if (x == 2) countcount[2]++;
	}

	if (countcount[0]) return this->payTable[2];
	if (countcount[1]) {
		if (countcount[2]) return this->payTable[3];
		else if (sameSuit) return this->payTable[4];
		else return this->payTable[6];
	}
	if(sameSuit) return this->payTable[4];
	else if (countcount[2] == 2) return this->payTable[7];
	else if (countcount[2] == 1) {
		if (count[0] == 2) return this->payTable[8];
		for (int i = 12; i > 0; --i) {
			if (count[i] == 2) return ( i>9 ? this->payTable[8] : this->payTable[9]);
		}
		std::cout << "Shouldn't be here!";
	}
	else return this->payTable[10];

	return 0;
}

void Game::ShowCredits(int earn)
{
	//std::cout << "我原本有 " << this->cash << " 元，\n";
	std::cout << "本輪賺了 " << earn << " 元，\n";
	this->cash += earn;
	std::cout << "我現在有 " << this->cash << " 元。\n";
}

void Game::setPayTable()
{
	Game::payTable[0] = 1000;
	Game::payTable[1] = 200;
	Game::payTable[2] = 100;
	Game::payTable[3] = 50;
	Game::payTable[4] = 25;
	Game::payTable[5] = 10;
	Game::payTable[6] = 3;
	Game::payTable[7] = 2;
	Game::payTable[8] = 1;
	Game::payTable[9] = 0;
	Game::payTable[10] = -1;
}
