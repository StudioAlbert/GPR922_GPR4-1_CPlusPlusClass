#pragma once
#include <map>

enum class CandyType : int
{
	BouleDeMammouth = 1,
	Tagada,
	LollyPops
};

class Store
{

	std::map<CandyType, int> candyQuantity;
	std::map<CandyType, int> candyPrice;

public:
	void FillStorage(CandyType candyType, int qty, int price);
	void Sell(CandyType candy, int buyQty, int& kidWalletMoney);

	void PrintStock();
	void PrintCommand();

	bool CheckQtyType(CandyType candy);
	bool CheckQtyPrice(CandyType candyType);

};

