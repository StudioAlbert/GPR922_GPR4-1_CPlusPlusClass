// 04 - Classroom - OOP - Operator.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <map>
#include <vector>

#include "Point.h"

int main()
{

    Point A(5,5);
    A.displayPoint();
	//std::cout << A << std::endl;

    Point B(-10, -10);
    B.displayPoint();
    //std::cout << B << std::endl;

    Point middle = A + B;
    //Point middle = B + A;

    if(A > B)
    {
        std::cout << "A is far more than B" << std::endl;
    }else
    {
        std::cout << "B is far more than A" << std::endl;
    }

    

}
