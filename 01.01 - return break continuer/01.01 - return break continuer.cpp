// 01.01 - return break continuer.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

void casseLeCode() {
	std::cout << "Casse le code" << std::endl;
	return;
}

int main()
{
	
    std::cout << "Hello World!\n";
	
	bool letsContinue = false;

	char reponse;

	do
	{

		std::cout << "Voulez vous continuer ? (o/n) ?" << std::endl;
		std::cin >> reponse;

		if (reponse == 'o') {
			letsContinue = true;
		}
		else if (reponse == 'n') {
			letsContinue = false;
		}
		else {
			// restart the loop
			std::cout << "ni oui, ni non" << std::endl;
			return 0;
		}

		std::cout << "end of the loop" << std::endl;

	} while (letsContinue == true);

	std::cout << "end of the main" << std::endl;

}
