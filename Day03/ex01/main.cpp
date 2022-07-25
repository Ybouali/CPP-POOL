#include "./ScavTrap.hpp"

int main()
{
    
    ScavTrap	hero("Hero");
	ScavTrap	no_one;

	hero.attack("enemy");
	no_one.attack("the bus");
	hero.beRepaired(100);
	hero.takeDamage(99999);
	no_one.attack("last enemy");
	no_one.beRepaired(99);

    return 0;
}
