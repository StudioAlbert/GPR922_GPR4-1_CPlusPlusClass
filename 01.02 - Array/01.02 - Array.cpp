// 01.02 - Array.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{

#pragma region C-STYLE Arrays

	int myArrayA[6] = { 19, 10, 8, 17, 9, 15 };
	// Parcours facon C
	std::cout << "Contenu du tableau [ ";
	for (int i = 0; i < 6; i++) {
		std::cout << "indice = " << i << ":" << myArrayA[i] << " : ";
	}
	std::cout << " ]" << std::endl;

	float myArrayB[10]{};
	// Affectation du contenu
	for (size_t i = 0; i < std::size(myArrayB); i++)
	{
		myArrayB[i] = i / 2.0f;
	}
	// Lecture du contenu
	std::cout << "Contenu du tableau [ ";
	for (int i = 0; i < std::size(myArrayB); i++) {
		std::cout << myArrayB[i] << " : ";
	}
	std::cout << " ]" << std::endl;

	// Enum to Array
	// using an enumerator
	enum Weekday
	{
		monday,
		tuesday,
		wednesday,
		thursday,
		friday,

		nbWeekday
	};
	int numberOfLessonsPerDay[nbWeekday]{};
	
	// 0 is the default value
	numberOfLessonsPerDay[wednesday] = 6;
	numberOfLessonsPerDay[thursday] = 6;
	
	// Lecture du contenu
	std::cout << "Contenu du tableau [ ";
	for (int i = 0; i < nbWeekday; i++) {
		std::cout << numberOfLessonsPerDay[i] << " : ";
	}
	std::cout << " ]" << std::endl;


#pragma endregion


}
