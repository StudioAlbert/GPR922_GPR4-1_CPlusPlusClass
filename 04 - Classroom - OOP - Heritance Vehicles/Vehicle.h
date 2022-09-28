#pragma once

#include <iostream>

class Vehicle
{

protected:
	float speed_;
	
public:
	Vehicle(float speed)
	{
		speed_ = speed;

		std::cout << "Vehicle : " << this->speed_ << std::endl;
		
	}

	float getSpeed()
	{
		return speed_;
	}

	void accelerate()
	{
		speed_ += 20;
	}

};

