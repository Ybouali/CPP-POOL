#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void HumanA::setName(std::string name)
{
    this->name = name;
    return ;
}

std::string HumanA::getName()
{
    return this->name;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with theire " << this->weapon.getType() << std::endl;
    return ;
}