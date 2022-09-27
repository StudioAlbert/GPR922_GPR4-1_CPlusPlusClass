

#include <iostream>
#include <list>
#include <vector>
#include <array>
#include <set>

#include "Card.h"
#include "Dealer.h"
#include "Player.h"



int main()
{
	
	Dealer dealer;
	std::vector<Player> players;

	bool quit = true;

	// Add some players ---------------------------
	players.emplace_back(Player("John Smith"));
	players.emplace_back(Player("Maverick Jones"));
	players.emplace_back(Player("Calamity Jane"));
	players.emplace_back(Player("Joe Dalton"));

	// Game Loop ----------------------------------
	do
	{

		system("cls");

		std::string typed;

		dealer.ResetDeck();
		for (auto& player : players)
		{
			player.ResetHand();
		}


		for (int nbCard = 0; nbCard < 5; ++nbCard)
		{
			for (auto& player : players)
			{
				player.GetACard(dealer.GiveACard());
			}
		}

		std::string bestPlayerName;
		Pattern bestPattern;
		
		for (auto& player : players)
		{

			std::cout << player.ToString() << std::endl;
			std::cout << player.GetPattern().ToString() << std::endl;
			std::cout << std::endl;

			if(player.GetPattern().PatternValue > bestPattern.PatternValue)
			{
				// We find something with better hand
				bestPlayerName = player.GetName();
				bestPattern = player.GetPattern();

			}else if(player.GetPattern().PatternValue == bestPattern.PatternValue)
			{
				// What if ex aequo ?

			}
			
		}

		// Who is the winner ?
		std::cout << "And the winner is " << bestPlayerName << " with " << bestPattern.ToString() << std::endl;
		std::cout << std::endl;

		// Quit or not ?????
		std::cout << "---------------------------------------" << std::endl;
		std::cout << "Quit (Y/N)" << std::endl;
		std::cin >> typed;

		quit = typed.find('y') == std::string::npos ? false : true;


	} while (!quit);

}

