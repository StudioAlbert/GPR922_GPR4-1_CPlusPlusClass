#pragma once
#include "Item.h"
class Hat :
    public Item
{
	
public:

    Hat();

    Hat(std::string fabric, std::string name) : Item(name)
    {
        fabric_ = fabric;
    }

    std::string fabric_;

    std::string to_string()
    {
        return fabric_ + " " + Item::to_string();
    }

};

