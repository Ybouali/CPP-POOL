#include "./Animal.hpp"

Animal::Animal(std::string type)
{
    this->type = type;
    return ;
}

Animal::Animal(void)
{
    return ;
}
Animal::~Animal()
{
    return ;
}

Animal& Animal::operator=(Animal &other)
{
    this->type = other.type;
    return *this;
}

Animal::Animal(Animal *other)
{
    *this = other;
}

std::string Animal::getType()
{
    return this->type;
}