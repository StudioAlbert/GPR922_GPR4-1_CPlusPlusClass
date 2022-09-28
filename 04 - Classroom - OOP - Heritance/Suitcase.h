#pragma once

#include "Item.h"

#include <iostream>
#include <vector>

#include "Hat.h"
#include "Shoes.h"


class Suitcase
{

public:
	std::vector<Item*> myStuff;

	void addItem(Item* item)
	{
		myStuff.push_back(item);
	}

	void printStuff()
	{
		std::cout << "This is my stuff" << std::endl;


		for(auto s : myStuff)
		{
			Hat* h = nullptr;
			Shoes* sh = nullptr;

			if (h = dynamic_cast<Hat*>(s)) {
				std::cout << h->to_string() << std::endl;
			}
			else if (sh = dynamic_cast<Shoes*>(s)) {
				std::cout << sh->to_string() << std::endl;
			}
			else {
				std::cout << s->to_string() << std::endl;
			}
		}
	}

};

