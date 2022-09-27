#pragma once

#include <array>
#include <vector>

#include "Card.h"
#include "Pattern.h"



class Player
{
	std::vector<Card> _hand;
	std::string _name;

	const std::array<std::string, 5> myStrings = { "one", "two", "three" };

public:
	Player(const std::string& name);

	void GetACard(Card);
	std::string ToString();

	void CountAValue();
	Pattern GetPattern();
};

