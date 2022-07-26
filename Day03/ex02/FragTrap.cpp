#include "./FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap Default constructor called" << std::endl;
	this->setName("FragTrap_Default");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const std::string name)
{
    std::cout << "FragTrap Default constructor with name called" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	return ;
}

FragTrap::FragTrap(FragTrap& other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap desconstructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap& other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (!this->getHitPoints())
	{
		std::cout << "FragTrap " << this->getName() << " He's deid!" << std::endl;
		return ;
	}
	if (this->Energy_points > 0)
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "FragTrap " << this->getName() << " does not have enough Energy to Attack" << std::endl;
}

void FragTrap::hightFivesGuys(void)
{
	if (!this->getHitPoints())
	{
		std::cout << "FragTrap " << this->getName() << " He's deid!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " is request for high five" << std::endl;
}