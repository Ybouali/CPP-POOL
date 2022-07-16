#include "./Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "N = " << N << " must be greater than 0" << std::endl;
        return nullptr;
    }

    if (name.empty())
    {
        std::cout << "Name must be not empty" << std::endl;
        return nullptr;
    }

    Zombie *zombie = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombie[i].setName(name);
    return zombie;
}