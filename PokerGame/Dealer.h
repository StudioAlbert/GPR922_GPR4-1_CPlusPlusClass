#pragma once
#include <list>
#include <random>
#include <vector>

#include "Card.h"

class Dealer
{
	std::vector<Card> deck;
	std::random_device rd;
	std::mt19937 rndNumber;


public:
	Dealer();
	void ResetDeck();
	const Card GiveACard();

};

