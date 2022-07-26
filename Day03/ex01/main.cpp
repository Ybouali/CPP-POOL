#include "./ScavTrap.hpp"

int main()
{
    
    ScavTrap	hero("Player 1");
	ScavTrap	me;

	hero.attack("Player 2");
	me.attack("the train");
	hero.beRepaired(100);
	hero.takeDamage(1010101010);
	me.attack("Player 2");
	me.beRepaired(202);

    return 0;
}
