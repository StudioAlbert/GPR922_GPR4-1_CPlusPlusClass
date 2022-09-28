#include "Monster.h"

int Monster::MonsterCount = 0;

Monster::Monster()
{
	MonsterCount++;
}

void Monster::PrintInfo()
{
		std::cout << MonsterCount << std::endl;
}


