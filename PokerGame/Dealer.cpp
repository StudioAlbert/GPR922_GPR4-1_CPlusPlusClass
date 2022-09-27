#include "Dealer.h"

#include <algorithm>
#include <random>

Dealer::Dealer()
{
	SetupDeck();
	ShuffleDeck();
}

void Dealer::SetupDeck()
{
	for (int hand = 0; hand < (int)CardSuit::End; hand++)
	{
		for (int value = (int)CardValue::Two; value < (int)CardValue::End; value++)
		{
			deck.emplace_back
			(
				Card(static_cast<CardSuit>(hand), static_cast<CardValue>(value))
			);
		}
	}
}

void Dealer::ShuffleDeck()
{

	//static std::random_device rd;
	//static std::mt19937 rndNumber(rd());

	std::shuffle(deck.begin(), deck.end(), std::random_device());

}

const Card Dealer::GiveACard()
{
	Card dealtCard(CardSuit::End, CardValue::End);

	if(deck.size()>0)
	{
		dealtCard = deck[0];
		deck.erase(deck.begin());
	}
	
	return dealtCard;

}
