#pragma once

#include <iostream>
#include <string>


class Enemy {

public:
    enum class Race
    {
        ORC,
        SHREK
    };

private:
    std::string _name;

    int _hitPoints;
    int _defense;
    int _attack;

    Race _race;

public:

    Enemy(std::string name, Race r);
    ~Enemy();
    
    int GetAttack() { return _attack; };
    int GetDefense() { return _defense; };
    std::string GetName() { return _name; };

    void SetAttack(int attack) { _attack = attack; };

    void AttackEnnemy(int damage);

    Enemy SetupOrc();
    Enemy SetupShrek();

};
