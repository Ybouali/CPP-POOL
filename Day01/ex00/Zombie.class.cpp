#include "./Zombie.class.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    return ;
}

void Zombie::setName(std::string name)
{
    this->name = name;
    return ;
}

std::string Zombie::getName()
{
    return this->name;
}

void Zombie::announce(void)
{
    std::cout << this->name << "BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}