#include "./ClapTrap.hpp"

int main()
{
    
    ClapTrap	hero("Hero");
	ClapTrap	no_one;

	hero.attack("enemy 1");
	no_one.attack("the car");
	hero.beRepaired(100);
	hero.takeDamage(10000);
	no_one.attack("enemy 2");
	no_one.beRepaired(99);

    return 0;
}
