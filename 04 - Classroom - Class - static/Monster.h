#pragma once
#include <iostream>

class Monster
{

private:
	static int MonsterCount;

public:
	int life;
	std::string name;
	float healRatio;

	Monster();
	static void PrintInfo();

};

