// 01.02 - Array.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <array>

int main()
{

#pragma region C++-STYLE Arrays

	std::array<int, 6> myArrayA { 19, 10, 8, 17, 9, 15 };

	// Parcours facon C
	std::cout << "Contenu du tableau [ ";
	for (auto myNumber : myArrayA) {
		std::cout << myNumber << " : ";
	}
	std::cout << " ]" << std::endl;

	std::array<int, 8> myArrayB{};
	// Affectation du contenu
	for (int i = 0; i < myArrayB.size(); i++)
	{
		myArrayB.at(i) = i / 2.0f;
	}
	// Lecture du contenu
	std::cout << "Contenu du tableau [ ";
	for (int i = 0; i < myArrayB.size(); i++) {
		std::cout << myArrayB.at(i) << " : ";
	}
	std::cout << " ]" << std::endl;

#pragma endregion


}
