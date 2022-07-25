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
    std::cout << "ScavTrap Default constructor with name called" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(ScavTrap& other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap desconstructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap& other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	this->attack(target);
	return ;
}

void ScavTrap::guardGate(void)
{
	this->guardGate();
	return ;
}