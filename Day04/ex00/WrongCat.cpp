#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
    return;
}

WrongCat::WrongCat(const WrongCat & other)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat & other)
{
    this->type = other.type;
    return *this;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat :: WrongCat sound <Sorry i don't remeber my sound :) !!!!>" << std::endl;
}
