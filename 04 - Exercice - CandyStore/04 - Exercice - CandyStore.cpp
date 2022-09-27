
#include <iostream>
#include <string>

#include "Store.h"

int main()
{
    Store candyStore;
    int   kidWalletMoney;
    bool quit = false;

    // Fill the store
    candyStore.FillStorage(CandyType::BouleDeMammouth, 15, 3);
    candyStore.FillStorage(CandyType::Tagada, 35, 1);
    candyStore.FillStorage(CandyType::LollyPops, 60, 2);

    // Init Money
    kidWalletMoney = 100;

    do
    {
	    std::string typedChar;
        CandyType buyType;
        int       buyQty;

    	system("cls");

        // Buy Candy
        std::cout << "---------------------------------------" << std::endl;
        std::cout << "What do you wanna buy ?" << std::endl;
        candyStore.PrintStock();

        std::cout << "---------------------------------------" << std::endl;
        candyStore.PrintCommand();
        std::cin >> typedChar;
        buyType = (CandyType)(std::stoi(typedChar));


        if(candyStore.CheckQtyType(buyType))
        {
            std::cout << "---------------------------------------" << std::endl;
            std::cout << "Quantity ? : " << std::endl;
            std::cin >> buyQty;

            candyStore.Sell(buyType, buyQty, kidWalletMoney);

        }

        std::cout << "---------------------------------------" << std::endl;
        std::cout << "Remaining Money" << kidWalletMoney << std::endl;


        // Quit or not ?????
        std::cout << "---------------------------------------" << std::endl;
        std::cout << "Quit (Y/N)" << std::endl;
        std::cin >> typedChar;

        quit = typedChar.find('y') == std::string::npos ? false : true;


    } while (!quit);

}
