#include "./FragTrap.hpp"

int main()
{
	std::cout << std::endl << "******* ScavTrap *****************" << std::endl << std::endl;
	
    ScavTrap player1("Player 1");

	player1.attack("Player 2");
	player1.beRepaired(10);
	player1.guardGate();
	player1.takeDamage(66666);
	player1.attack("Player 2");
	player1.guardGate();

	std::cout << std::endl << "******* FragTrap *****************" << std::endl << std::endl;

	FragTrap Player2("Player 1");

	Player2.attack("Player 2");
	Player2.beRepaired(10);
	Player2.hightFivesGuys();
	Player2.takeDamage(2020202);
	Player2.attack("Player 2");
	Player2.hightFivesGuys();
    return 0;
}
