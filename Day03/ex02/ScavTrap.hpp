#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(ScavTrap& other);
		~ScavTrap(void);
		ScavTrap&	operator=(ScavTrap& other);

        void attack(const std::string& target);
		void guardGate(void);
};

#endif