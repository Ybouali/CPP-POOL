#include "./HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->setName(name);
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::setName(std::string name)
{
    this->name = name;
    return ;
}

std::string HumanB::getName()
{
    return this->name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
    return ;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with theire " << this->weapon->getType() << std::endl;
    return ;
}