#include "./Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "N :" << N << " must be greater than 0" << std::endl;
        return nullptr;
    }

    Zombie zombie;

    for (int i = 0; i < N; i++)
    {
        // zombie[i] = new Zombie(name);
    }
}