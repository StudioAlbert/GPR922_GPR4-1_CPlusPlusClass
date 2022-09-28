#pragma once
#include "Vehicle.h"
#include <string>

class FlyingVehicle :
    public Vehicle
{
private:
    std::string pilotName_;

public:
    FlyingVehicle(std::string PilotName, float speed) : Vehicle(speed)
    {
        std::cout << "Flying Vehicle : " << this->speed_ << std::endl;
        pilotName_ = PilotName;
    }

    std::string getPilotName() { return pilotName_; };


};

