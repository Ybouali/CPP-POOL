#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
	this->setName("ScavTrap_Default");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string name)
{

}

ScavTrap::ScavTrap(const ScavTrap& other)
{

}
ScavTrap::~ScavTrap(void)
{

}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{

}

void ScavTrap::attack(const std::string& target)
{

}

void ScavTrap::guardGate(void)
{

}