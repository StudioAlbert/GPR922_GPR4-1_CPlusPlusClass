#pragma once

#include <array>
#include <vector>

#include "Card.h"
#include "Pattern.h"



class Player
{

private:
	std::vector<Card> _hand;
	std::string _name;

	const std::array<std::string, 5> myStrings = { "one", "two", "three" };

public:
	Player(const std::string& name);

	std::string ToString();

	Pattern GetPattern();
	const std::string GetName();

	void ResetHand();
	void GetACard(Card);

	bool operator>(Player&);
	Player operator=(Player&);

};

