#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        const std::string& target;
        unsigned int amount;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap& const other);
        ClapTrap& operator=(ClapTrap& const other);
        std::string getName();
        void setName(std::string name);
};


#endif