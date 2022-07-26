#include "./FragTrap.hpp"

int main()
{
	std::cout << std::endl << "******* ScavTrap *****************" << std::endl << std::endl;
	
    ScavTrap Hero("Player 1");

	Hero.attack("Player 2");
	Hero.beRepaired(10);
	Hero.guardGate();
	Hero.takeDamage(66666);
	Hero.attack("Player 2");
	Hero.guardGate();

	std::cout << std::endl << "******* FragTrap *****************" << std::endl << std::endl;

	FragTrap Enemy("Player 1");

	Enemy.attack("Player 2");
	Enemy.beRepaired(10);
	Enemy.hightFivesGuys();
	Enemy.takeDamage(2020202);
	Enemy.attack("Player 2");
	Enemy.hightFivesGuys();
    return 0;
}
