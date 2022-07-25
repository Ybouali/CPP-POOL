#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string         name;
        unsigned int        Hit_points;
        unsigned int        Energy_points;
        unsigned int        Attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ~ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif