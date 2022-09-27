#pragma once
#include <string>

enum class CardSuit
{
	CLUBS,
	HEARTS,
	SPADES,
	DIAMONDS,

	End
};

enum class CardValue
{
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
	Ace,

	End

};

class Card
{
public:
	Card(CardSuit, CardValue);

private:
	CardSuit Suit;
	CardValue Value;

	

public:
	std::string ToString();
	CardSuit GetSuit() { return Suit; };
	CardValue GetValue() { return Value; };

	static bool SortByValue(Card a, Card b)
	{
		return a.GetValue() > b.GetValue();
	}

	bool operator< (const Card& b);

	static const std::string SuitToString(CardSuit c);
	static const std::string ValueToString(CardValue v);

};


