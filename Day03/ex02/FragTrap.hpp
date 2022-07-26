#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(FragTrap& other);
		~FragTrap(void);
		FragTrap&	operator=(FragTrap& other);

		void hightFivesGuys(void);
		void attack(const std::string& target);
};

#endif