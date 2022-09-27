#pragma once
#include <string>

class Dice
{

public :
	void ThrowDice(int min, int max);
	void ExaminResult();

	std::string Name = "unknown";
	int Result = 0;

};

void printDice(Dice diceA);



