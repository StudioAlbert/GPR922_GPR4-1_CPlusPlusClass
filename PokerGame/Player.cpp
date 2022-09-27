#include "Player.h"

#include <algorithm>
#include <map>

Player::Player(const std::string& name) : _name(name)
{
}

void Player::ResetHand()
{
	_hand.clear();
}

void Player::GetACard(const Card card)
{
	if(_hand.size() < 5)
	{
		_hand.emplace_back(Card(card));
	}
}

std::string Player::ToString()
{

	std::string handStr;

	handStr += _name;
	handStr += " : \t\t";

	for (int nbCard = 0; nbCard < _hand.size(); ++nbCard)
	{
		handStr += _hand.at(nbCard).ToString();
		if(nbCard != _hand.size() - 1)
		{
			handStr += " : \t";
		}
	}

	return handStr;
}

bool CountValues(Card a)
{
	return true;
}


Pattern Player::GetPattern()
{
	Pattern result = Pattern();

	if(Pattern::HasRoyalFlush(_hand, result))
	{}
	else if (Pattern::HasStraightFlush(_hand, result))
	{}
	else if (Pattern::HasFourOfAKind(_hand, result))
	{}
	else if (Pattern::HasFullHouse(_hand, result))
	{}
	else if (Pattern::HasFlush(_hand, result))
	{}
	else if (Pattern::HasStraight(_hand, result))
	{}
	else if (Pattern::HasThreeOfAKind(_hand, result))
	{}
	else if (Pattern::HasTwoPairs(_hand, result))
	{}
	else if (Pattern::HasPair(_hand, result))
	{}
	else
	{
		result.PatternValue = Pattern::PatternValue::Highcard;
		result.bestCardValues = Pattern::BestCards(_hand);
	}
	
	return result;
	
}

const std::string Player::GetName()
{
	return _name;
}



