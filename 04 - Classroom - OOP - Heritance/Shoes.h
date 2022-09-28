#pragma once
#include "Item.h"

class Shoes : public Item
{

public:

	Shoes();

	Shoes(std::string name, int size) : Item(name)
	{
		size_ = size;
	}

	int size_;

	std::string to_string()
	{
		return std::to_string(size_) + " " + Item::to_string();
	}

};

