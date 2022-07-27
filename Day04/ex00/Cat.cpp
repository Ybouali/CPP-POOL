#include "./Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    return ;
}

Cat::~Cat()
{
    return;
}

Cat::Cat(const Cat & other)
{
    *this = other;
}

Cat &Cat::operator=(const Cat & other)
{
    this->type = other.type;
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat :: Cat sound <meaw meaw meaw meaw meaw ...>" << std::endl;
}
