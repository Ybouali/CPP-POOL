#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->setName("ClapTrap_default");
    this->setAttackDamage(0);
    this->setHitPoints(10);
    this->setEnergyPoints(10);
    return ;
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
    return ;
}

std::string ClapTrap::getName(void)
{
    return this->name;
}

void ClapTrap::setHitPoints(unsigned int Hit_points)
{
    this->Hit_points = Hit_points;
    return ;
}

unsigned int ClapTrap::getHitPoints(void)
{
    return this->Hit_points;
}


void            ClapTrap::setEnergyPoints(unsigned int Energy_points)
{
    this->Energy_points = Energy_points;
}

unsigned int    ClapTrap::getEnergyPoints(void)
{
    return this->Energy_points;
}

void            ClapTrap::setAttackDamage(unsigned int Attack_damage)
{
    this->Attack_damage = Attack_damage;
}

unsigned int    ClapTrap::getAttackDamage(void)
{
    return this->Attack_damage;
}


ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor with name called" << std::endl;
    this->name = name;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}


ClapTrap& ClapTrap::operator=(ClapTrap & other)
{
    this->name = other.getName();
    this->Hit_points = other.getHitPoints();
    this->Energy_points = other.getEnergyPoints();
    this->Attack_damage = other.getAttackDamage();
    return *this;
}

ClapTrap::ClapTrap(ClapTrap & other)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = other;
    return ;
}

void ClapTrap::attack(const std::string& target)
{
    if (!this->Hit_points)
    {
        std::cout << "ClapTrap " << this->getName() << " He's deid!" << std::endl;
        return ;
    }

    if (this->Energy_points > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->Energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " does not have enough Energy to Attack" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->getHitPoints())
	{
		std::cout << "ClapTrap " << this->getName() << " He's deid!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " take " << amount << " of Damage!" << std::endl;
	if (amount > this->getHitPoints())
		this->setHitPoints(0);
	else
		this->Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->getHitPoints())
	{
		std::cout << "ClapTrap " << this->getName() << " He's deid!" << std::endl;
		return ;
	}
	if (this->Energy_points > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " recover " << amount << " of he's Hit points!" << std::endl;
		if (amount + this->getHitPoints() > 4294967295)
			this->setHitPoints(4294967295);
		else
			this->Hit_points += amount;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " does not have enough Energy to be Repaired" << std::endl;
}