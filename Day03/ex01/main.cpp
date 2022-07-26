#include "./ScavTrap.hpp"

int main()
{
    
    ScavTrap	player1("Player 1");
	ScavTrap	player2;

	player1.attack("Player 2");
	player2.attack("the train");
	player1.beRepaired(100);
	player1.takeDamage(1010101010);
	player2.attack("Player 2");
	player2.beRepaired(202);

    return 0;
}
