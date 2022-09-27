#pragma once
#include <vector>

#include "Card.h"

class Pattern
{

public:
	enum class PatternValue
	{
		Highcard,
		Pair,
		TwoPairs,
		ThreeOfAKind,
		Straight,
		Flush,
		FullHouse,
		FourOfAKind,
		StraightFlush,
		RoyalFlush
	};

public:
	std::vector<CardValue> bestCardValues;
	PatternValue PatternValue;
	
	std::string ToString();

private:
	static int CountAValue(const std::vector<Card>& hand, CardValue v);
	static int CountASuit(const std::vector<Card>& hand, CardSuit s);

public:
	static bool HasRoyalFlush(const std::vector<Card>& cards, Pattern& result);
	static bool HasStraightFlush(const std::vector<Card>& cards, Pattern& result);
	static bool HasFourOfAKind(const std::vector<Card>& cards, Pattern& result);
	static bool HasFullHouse(const std::vector<Card>& cards, Pattern& result);
	static bool HasFlush(const std::vector<Card>& cards, Pattern& result);
	static bool HasStraight(const std::vector<Card>& cards, Pattern& result);
	static bool HasThreeOfAKind(const std::vector<Card>& cards, Pattern& result);
	static bool HasTwoPairs(const std::vector<Card>& cards, Pattern& result);
	static bool HasPair(const std::vector<Card>& cards, Pattern& result);
	static const std::vector<CardValue> BestCards(std::vector<Card>& cards);
};

