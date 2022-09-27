#include "Dice.h"

#include <iostream>
#include "stdlib.h"

void Dice::ThrowDice(int Min, int max) {

	Result = Min + rand() % (max + 1 - Min);

}

void Dice::ExaminResult()
{
	switch (this->Result)
	{
	case 1:
		std::cout << "Bomb !!!!!!!!!!!!!!!" << std::endl;
		break;

	case 2:
	case 5:
		std::cout << "Poison !!!!!!!!!!!!!!!" << std::endl;
		break;

	default:
		std::cout << "Not a Bomb, either a poison !!!!!!!!!!!!!!!" << std::endl;
		break;

	}


}


void printDice(Dice dice)
{
	std::cout << dice.Name << " : " << dice.Result << std::endl;
}
