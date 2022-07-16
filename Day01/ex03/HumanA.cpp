#include "./HumanA.hpp"

HumanA::HumanA()
{
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
    std::cout << this->name << " attacks with theire";
}