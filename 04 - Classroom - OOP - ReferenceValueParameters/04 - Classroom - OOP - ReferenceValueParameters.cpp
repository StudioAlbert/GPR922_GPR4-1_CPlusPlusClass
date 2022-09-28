// 04 - Classroom - OOP - ReferenceValueParameters.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int valueCall(int number)
{
	number = 0;
	return number;
}

void referenceCall(int& number)
{
	number = 0;
	/*return number;*/
}

void pointerCall(int* number)
{
	number = 0;
	/*return number;*/
}

int main()
{
    int alpha = 1;
	int beta = 2;

	std::cout << "alpha=" << alpha << " beta=" << beta << std::endl;
	referenceCall(alpha);
	valueCall(beta);
	std::cout << "alpha=" << alpha << " beta=" << beta << std::endl;

	std::cout << "alpha=" << alpha << " beta=" << beta << std::endl;
	referenceCall(alpha);
	beta = valueCall(beta);
	pointerCall(&alpha);

	std::cout << "alpha=" << alpha << " beta=" << beta << std::endl;

}
