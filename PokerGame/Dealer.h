#pragma once
#include <list>
#include <vector>

#include "Card.h"

class Dealer
{
	std::vector<Card> deck;

	void SetupDeck();

public:
	Dealer();
	void ShuffleDeck();
	const Card GiveACard();

};

