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
	if (!this->getHitPoints())
	{
		std::cout << "ScavTrap " << this->getName() << " He's deid!" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->getName() << " does not have enough Energy to Attack" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (!this->getHitPoints())
	{
		std::cout << "ScavTrap " << this->getName() << " He's deid!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}