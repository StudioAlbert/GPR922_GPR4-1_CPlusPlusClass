// 01.03 - OOP - Struct.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Enemy.h"

int main()
{
    
    Enemy orc("orc", Enemy::Race::ORC);
	Enemy shrek("shrek", Enemy::Race::SHREK);

    Enemy::Race race;


    int array2D[5][4];

    array2D[0][0];

 //   orc = SetupOrc();
	//shrek = SetupShrek();

    // Shrek se buffe
    shrek.SetAttack(20);

    std::cout << orc.GetName() << std::endl;
    std::cout << shrek.GetName() << std::endl;

    if(shrek.GetAttack() > orc.GetDefense())
    {
        orc.AttackEnnemy(1);
    }
    
}
