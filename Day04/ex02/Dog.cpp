#include "./Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
    this->myBrain = new Brain();
    return ;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->myBrain;
    return;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    this->type = other.type;
    *(this->myBrain) = *(other.getBrain());
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog :: Dog sound <How How How How How ...>" << std::endl;
}

Brain *Dog::getBrain( void ) const
{
    return this->myBrain;
}