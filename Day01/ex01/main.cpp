#include "./Zombie.hpp"

int main(void)
{
    Zombie *zombie = zombieHorde(NUMBER_OF_ZOMBIES, "");
    if (!zombie) return 1;

    for (int i = 0; i < NUMBER_OF_ZOMBIES; i++)
        zombie[i].announce();
        
    delete[] zombie;
    
    return 0;
}