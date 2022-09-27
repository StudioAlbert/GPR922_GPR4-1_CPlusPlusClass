#include "Dealer.h"

#include <algorithm>
#include <random>

Dealer::Dealer()
{

	rndNumber = std::mt19937(rd());

}


void Dealer::ResetDeck()
{

	deck.clear();

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

	std::shuffle(deck.begin(), deck.end(), rndNumber);
	//std::random_shuffle(deck.begin(), deck.end());

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
