#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->setName(name);
    return ;
}

ClapTrap::~ClapTrap()
{
    return ;
}


ClapTrap& ClapTrap::operator=(ClapTrap& const other)
{
    this->name = other.getName();
    return *this;
}

ClapTrap::ClapTrap(ClapTrap& const other)
{
    *this = other;
    return ;
}

std::string ClapTrap::getName()
{
    return this->name;
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
    return ;
}
