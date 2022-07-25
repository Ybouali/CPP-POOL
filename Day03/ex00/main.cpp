#include "./ClapTrap.hpp"

int main()
{
    
    ClapTrap	hero("Hero");
	ClapTrap	me;

	hero.attack("enemy 1");
	me.attack("the car");
	hero.beRepaired(100);
	hero.takeDamage(10000);
	me.attack("enemy 2");
	me.beRepaired(99);

    return 0;
}
