#include "Pattern.h"
#include <algorithm>

std::string Pattern::ToString()
{

	std::string patternString;

	switch (PatternValue)
	{
	case PatternValue::Highcard:
		patternString += "Highcard";
		break;
	case PatternValue::Pair:
		patternString += "Pair";
		break;
	case PatternValue::TwoPairs:
		patternString += "TwoPairs";
		break;
	case PatternValue::ThreeOfAKind:
		patternString += "ThreeOfAKind";
		break;
	case PatternValue::FourOfAKind:
		patternString += "FourOfAKind";
		break;
	case PatternValue::Straight:
		patternString += "Straight";
		break;
	case PatternValue::StraightFlush:
		patternString += "StraightFlush";
		break;
	case PatternValue::Flush:
		patternString += "Flush";
		break;
	case PatternValue::FullHouse:
		patternString += "FullHouse";
		break;
	case PatternValue::RoyalFlush:
		patternString += "RoyalFlush";
		break;
	default:
		patternString += "unknown";
		break;
	}

	patternString += " : ";

	for (auto bestCardValue : bestCardValues)
	{
		patternString += Card::ValueToString(bestCardValue) + " ";
	}

	return patternString;
}



int Pattern::CountAValue(const std::vector<Card>& hand, CardValue v)
{
	int countValue = 0;

	for (Card card : hand)
	{
		if (card.GetValue() == v)
		{
			countValue++;
		}

	}

	return countValue;

}

int Pattern::CountASuit(const std::vector<Card>& hand, CardSuit s)
{
	int countSuit = 0;

	for (Card card : hand)
	{
		if (card.GetSuit() == s)
		{
			countSuit++;
		}

	}

	return countSuit;

}

bool Pattern::HasRoyalFlush(const std::vector<Card>& cards, Pattern& result)
{
	return false;
}

bool Pattern::HasStraightFlush(const std::vector<Card>& cards, Pattern& result)
{
	return false;
}

bool Pattern::HasFourOfAKind(const std::vector<Card>& cards, Pattern& result)
{

	result.bestCardValues.clear();

	for (auto card : cards)
	{
		if (CountAValue(cards, card.GetValue()) == 4)
		{
			result.PatternValue = PatternValue::FourOfAKind;
			result.bestCardValues.emplace_back(card.GetValue());
			return true;
		}
	}

	return false;

}

bool Pattern::HasFullHouse(const std::vector<Card>& cards, Pattern& result)
{
	result.bestCardValues.clear();

	for (auto card : cards)
	{
		if (CountAValue(cards, card.GetValue()) == 3)
		{
			result.bestCardValues.emplace_back(card.GetValue());

			for (auto card : cards)
			{
				if (card.GetValue() != result.bestCardValues.back() && CountAValue(cards, card.GetValue()) == 2)
				{
					result.PatternValue = PatternValue::FullHouse;
					result.bestCardValues.emplace_back(card.GetValue());
					return true;
				}
			}

		}
	}
	return false;

}

bool Pattern::HasFlush(const std::vector<Card>& cards, Pattern& result)
{
	return false;
}

bool Pattern::HasStraight(const std::vector<Card>& cards, Pattern& result)
{
	return false;
}

bool Pattern::HasThreeOfAKind(const std::vector<Card>& cards, Pattern& result)
{

	result.bestCardValues.clear();

	for (auto card : cards)
	{
		if (CountAValue(cards, card.GetValue()) == 3)
		{
			result.PatternValue = PatternValue::ThreeOfAKind;
			result.bestCardValues.emplace_back(card.GetValue());
			return true;
		}
	}

	return false;
}

bool Pattern::HasTwoPairs(const std::vector<Card>& cards, Pattern& result)
{

	result.bestCardValues.clear();

	for (auto card : cards)
	{
		if (CountAValue(cards, card.GetValue()) == 2)
		{
			result.bestCardValues.emplace_back(card.GetValue());

			for (auto card : cards)
			{
				if (card.GetValue() != result.bestCardValues.back() && CountAValue(cards, card.GetValue()) == 2)
				{
					result.PatternValue = PatternValue::TwoPairs;
					result.bestCardValues.emplace_back(card.GetValue());
					return true;
				}
			}

		}
	}
	return false;
}

bool Pattern::HasPair(const std::vector<Card>& cards, Pattern& result)
{

	result.bestCardValues.clear();

	for (auto card : cards)
	{
		if (CountAValue(cards, card.GetValue()) == 2)
		{
			result.PatternValue = PatternValue::Pair;
			result.bestCardValues.emplace_back(card.GetValue());
			return true;
		}
	}

	return false;
}

const std::vector<CardValue> Pattern::BestCards(std::vector<Card>& cards)
{

	std::vector<CardValue> values;

	for (auto& card : cards)
	{
		values.emplace_back(card.GetValue());
	}

	std::sort(values.begin(), values.end());

	return values;

}

