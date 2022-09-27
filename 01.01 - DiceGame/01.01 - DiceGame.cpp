#include <iostream>
#include <chrono>
#include <thread>

#include "Dice.h"

constexpr int START_MONEY = 0;

int main()
{
    
    srand(time(NULL));
    
	Dice diceA;
    Dice diceB;
    
    int playerMoney = START_MONEY;

    for(int nbNormalTurn = 0; nbNormalTurn < 10; nbNormalTurn++)
	{
        system("cls");
        std::cout << "nb turn " << nbNormalTurn << std::endl;

        diceA.ThrowDice(1, 6);
        diceB.ThrowDice(1, 6);

        printDice(diceA);
        printDice(diceB);


        if(diceA.Result == 6 && diceB.Result == 6)
        {
	        // ---------------------
            std::cout << "Super Crit !!!!!!!!!!!!!!!!" << std::endl;
        }
		else if(diceA.Result == 6 || diceB.Result == 6)
        {
            // -------------------------------
			std::cout << "Crit !!!!!!!!!!!!!!!!" << std::endl;
        }else
        {
            std::cout << "Normal behaviour" << std::endl;
            diceA.ExaminResult();
            diceB.ExaminResult();
        }



        std::cout << "end of the turn" << std::endl;

        std::cout << " Waiting ";
        for(int waitingLoopIdx = 0; waitingLoopIdx < 10; waitingLoopIdx++)
        {
            std::cout << " - ";
        	std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        std::cout << std::endl;
        std::cout << std::endl;
                
    }

    return EXIT_SUCCESS;

}


