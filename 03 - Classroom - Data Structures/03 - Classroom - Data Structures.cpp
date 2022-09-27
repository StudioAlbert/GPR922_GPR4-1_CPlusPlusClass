// 03 - Classroom - Data Structures.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

int main()
{

#pragma region Vector management
    std::vector<char> v0;                //empty
    std::vector<int> v1 = { 10, 20, 30 };
	std::vector<int> v2(5);             //5 integers (zero initialised)
    std::vector<int> v3(5, -1);         //5 -1 values
    std::vector<int> v4(v1);             //copy of v1

    std::vector<int> myVector;

    myVector.push_back(0);
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.emplace(myVector.begin(), 3);
    myVector.emplace(myVector.end(), 4);
	myVector.insert(myVector.begin(), 4, 3);

	std::vector<int>::iterator v = myVector.begin() + 2;
	myVector.insert(v, 4, 5);

    myVector.at(2) = 3; // Affect directly : be aware about the size
    //myVector.at(14) = 3; // Crash here !!!!!!!!!!!!!!!!

	std::cout << "Vector -------------------------------------------------" << std::endl;

	// Parcours auto
    for (auto oneInt : myVector)
    {
        std::cout << "Value : " << oneInt << std::endl;
    }
    std::cout << std::endl;

    myVector.pop_back();

    // Parcours avec index
    for(int i{0}; i < myVector.size(); i++)
    {
        if(myVector[i] % 2 == 0)
        {
            std::cout << "Value : " << myVector[i] << std::endl;
        }
    }
    std::cout << std::endl;

    myVector.pop_back();

    std::cout << "Value : ";
    for(std::vector<int>::iterator v = myVector.begin(); v < myVector.end(); ++v)
    {
        
    	std::cout << *v;
    	if(v != myVector.end())
        {
            std::cout << ",";
        }

    }
    std::cout << std::endl;

    int i;
    for(;i=0;)
    {
        std::cout << "i";
    }

#pragma endregion



}

