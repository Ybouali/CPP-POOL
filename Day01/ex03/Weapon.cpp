#include "./Weapon.hpp"

Weapon::Weapon()
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

std::string Weapon::getType()
{
    return this->typeWeapon;
}

void Weapon::setType(std::string type)
{
    this->typeWeapon = type;
}