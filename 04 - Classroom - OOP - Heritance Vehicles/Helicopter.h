#pragma once
#include "FlyingVehicle.h"

class Helicopter :
    public FlyingVehicle
{

public:
    Helicopter(std::string PilotName, float speed) : FlyingVehicle(PilotName, speed)
    {
        std::cout << "Constructor Helicopter : " << this->speed_ << std::endl;
    }

    void accelerate()
    {
        Vehicle::accelerate();
    	speed_ += 150;
    }

};

