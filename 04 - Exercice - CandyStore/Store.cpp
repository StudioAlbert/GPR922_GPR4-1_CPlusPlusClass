#include "Store.h"

#include <iostream>

std::string candyName(CandyType candyType)
{
	switch (candyType)
	{
	case CandyType::BouleDeMammouth:
		return "Boule de mammouth";
	case CandyType::Tagada:
		return "Tagada";
	case CandyType::LollyPops:
		return "LollyPops";
	default:
		return "unknown candy";
	}
}

void Store::FillStorage(CandyType candyType, int qty, int price)
{
	candyQuantity[candyType] = qty;
	candyPrice[candyType] = price;
}

void Store::Sell(CandyType buyType, int buyQty, int& kidWalletMoney)
{

	if (CheckQtyPrice(buyType) && CheckQtyType(buyType))
	{

		if (candyQuantity[buyType] < buyQty)
		{
			std::cout << "Pas assez de " << candyName(buyType);
			return;
		}

		if(kidWalletMoney < candyPrice[buyType] * buyQty)
		{
			std::cout << "Pas assez d'argent " << kidWalletMoney << " < " << (kidWalletMoney < candyPrice[buyType]) << std::endl;
			return;
		}

		// Tout va bien, l'achat se fait --------------------------------------------------
		kidWalletMoney -= candyPrice[buyType] * buyQty;
		candyQuantity[buyType] -= buyQty;

	}

}

void Store::PrintStock()
{

	for(auto oneCandy : candyQuantity)
	{
		std::cout << "Quantity of " << candyName(oneCandy.first) << " : " << oneCandy.second << std::endl;
	}

}

void Store::PrintCommand()
{
	for (auto oneCandy : candyQuantity)
	{
		std::cout << "[" << (int)oneCandy.first << "] for " << candyName(oneCandy.first) << " ";
	}
	std::cout << std::endl;

}

bool Store::CheckQtyType(CandyType candyType)
{
	return candyQuantity.find(candyType) != candyQuantity.end();
}

bool Store::CheckQtyPrice(CandyType candyType)
{
	return candyPrice.find(candyType) != candyPrice.end();
}


