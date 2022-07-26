#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string         name;
        unsigned int        Hit_points;
        unsigned int        Energy_points;
        unsigned int        Attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ~ClapTrap();
        ClapTrap(ClapTrap& other);
        ClapTrap& operator=(ClapTrap& other);

        void            setName(std::string name);
        std::string     getName(void);

        void            setHitPoints(unsigned int Hit_points);
        unsigned int    getHitPoints(void);

        void            setEnergyPoints(unsigned int Energy_points);
        unsigned int    getEnergyPoints(void);

        void            setAttackDamage(unsigned int Attack_damage);
        unsigned int    getAttackDamage(void);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif