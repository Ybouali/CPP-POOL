#include "./Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal  Default constructor called" << std::endl;
    this->type = "Animal";
    return ;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

Animal& Animal::operator=(const Animal &other)
{
    this->type = other.type;
    return *this;
}

Animal::Animal(const Animal & other)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = other;
}


const std::string& Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal : Animal make a sound --------" << std::endl;
}