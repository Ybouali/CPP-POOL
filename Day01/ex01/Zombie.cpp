#include "./Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": Zombie destructor" << std::endl;
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
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}