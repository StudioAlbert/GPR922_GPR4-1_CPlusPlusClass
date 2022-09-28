// 04 - Classroom - OOP - Heritance Vehicles.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Helicopter.h"


int main()
{
    Helicopter apache("Tom Cruise", 200.0f);

    std::cout << "I'm moving to " << apache.getSpeed() << std::endl;
    std::cout << "My Pilot is " << apache.getPilotName() << std::endl;

    apache.accelerate();

}
