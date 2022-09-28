#pragma once
#include <string>

class Item
{

public:
	Item();

	Item(std::string name)
	{
		name_ = name;
	}

	std::string name_;

	virtual std::string to_string()
	{
		return name_;
	}

};

