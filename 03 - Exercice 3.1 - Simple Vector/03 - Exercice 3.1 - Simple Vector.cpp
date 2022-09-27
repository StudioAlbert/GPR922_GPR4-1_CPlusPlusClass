#include <iostream>
#include <random>
#include <vector>

int GetRandomInt()
{

	static std::random_device rd;
	static std::mt19937 generator(rd());
	static std::uniform_int_distribution<> distribution(0, 19); // define the range

	return distribution(generator);

}

int main()
{

	// declarer le tableau
	std::vector<int> rndNumbers;

	for(int i = 0; i < 12; i++)
	{
		rndNumbers.push_back(GetRandomInt());
	}

	std::cout << "auto iteration" << std::endl;
	for (int nb : rndNumbers)
	{
		std::cout << nb << std::endl;
	}

	for (int i = 0; i < rndNumbers.size(); ++i)
	{
		std::cout << rndNumbers[i] << std::endl;
	}

	std::cout << "auto iteration" << std::endl;
	for (std::vector<int>::iterator it = rndNumbers.begin(); it < rndNumbers.end(); it++)
	{
		std::cout << *it << std::endl;
	}

}
