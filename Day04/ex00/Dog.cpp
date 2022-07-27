#include "./Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    return ;
}

Dog::~Dog()
{
    return;
}

Dog::Dog(const Dog &other)
{
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    this->type = other.type;
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog :: Dog sound <meaw meaw meaw meaw meaw ...>" << std::endl;
}