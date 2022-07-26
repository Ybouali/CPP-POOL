#include "./ClapTrap.hpp"

int main()
{
    
    ClapTrap	player1("Player 1");
	ClapTrap	player2;

	player1.attack("enemy 1");
	// player2.setHitPoints(0);
	// player2.setEnergyPoints(0);
	player2.attack("the train");
	player1.beRepaired(100);
	player1.takeDamage(10000);
	player2.attack("enemy 1");
	player2.beRepaired(99);

    return 0;
}
