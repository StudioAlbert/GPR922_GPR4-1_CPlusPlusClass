#include "Enemy.h"

Enemy::Enemy(std::string name, Race r)
{
    std::cout << "Creating ennemy" << std::endl;

    _name = name;
    _race = r;

    if(_race == Race::ORC)
    {
        _hitPoints = 100;
        _defense = 5;
        _attack = 13;
    }
    else if(_race == Race::SHREK)
    {
        _hitPoints = 50;
        _defense = 10;
        _attack = 3;
    }else
    {
	    
    }


}

Enemy::~Enemy()
{
    std::cout << "Ennemy destroyed" << std::endl;
}


void Enemy::AttackEnnemy(int damage)
{
    _hitPoints -= damage;

    if (_hitPoints <= 0)
    {
        std::cout << "je suis mort" << std::endl;
    }else
    {
        std::cout << _name << " Remaining HP : " << _hitPoints << std::endl;
    }
}

//Enemy Enemy::SetupOrc()
//{
//    Enemy orcToSetup;
//
//    orcToSetup.name = "Orc dfkdlf";
//    orcToSetup.hit_points = 100;
//    orcToSetup.defense = 10;
//    orcToSetup.attack = 3;
//
//    return orcToSetup;
//
//}
//
//Enemy Enemy::SetupShrek()
//{
//    Enemy shrekModel;
//
//    shrekModel.name = "Shrek is beautiful";
//    shrekModel.hit_points = 50;
//    shrekModel.defense = 5;
//    shrekModel.attack = 30;
//
//    return shrekModel;
//
//}
