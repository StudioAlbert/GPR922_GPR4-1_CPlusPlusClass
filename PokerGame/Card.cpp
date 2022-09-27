#include "Card.h"

Card::Card(CardSuit s, CardValue v)
{
	Suit = s;
	Value = v;
}

const std::string Card::SuitToString(CardSuit c)
{

	switch (c)
	{
	case CardSuit::CLUBS:
		return "C";
	case CardSuit::SPADES:
		return "S";
	case CardSuit::DIAMONDS:
		return "D";
	case CardSuit::HEARTS:
		return "H";
	default:
		return "-";
	}

}

const std::string Card::ValueToString(CardValue v)
{
	switch (v)
	{
	case CardValue::Two:
		return "Two";
	case CardValue::Three:
		return "Three";
	case CardValue::Four:
		return "Four";
	case CardValue::Five:
		return "Five";
	case CardValue::Six:
		return "Six";
	case CardValue::Seven:
		return "Seven";
	case CardValue::Eight:
		return "Eight";
	case CardValue::Nine:
		return "Nine";
	case CardValue::Ten:
		return "Ten";
	case CardValue::Jack:
		return "Jack";
	case CardValue::Queen:
		return "Queen";
	case CardValue::King:
		return "King";
	case CardValue::Ace:
		return "Ace";
	default:
		return "Unknown";
	}
}

std::string Card::ToString()
{
	std::string cardString;

	cardString += Card::ValueToString(this->Value);
	cardString += "/";
	cardString += Card::SuitToString(this->Suit);

	return cardString;
}

bool Card::operator<(const Card& b)
{
	return this->Value < b.Value;
}
