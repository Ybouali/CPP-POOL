#include "./Zombie.class.hpp"

Zombie *newZombie(std::string name)
{
    if (name.empty())
    {
        std::cout << "Zombie name is empty" << std::endl;    
        return nullptr;
    }
    Zombie *zombie = new Zombie(name);
    if (!zombie)
        return nullptr;
    return zombie;
}

int main(void)
{
    Zombie *zombie = newZombie("COCO");

    if (!zombie)
        std::cout << "Zombie not created" << std::endl;

    zombie->announce();
    return 0;
}