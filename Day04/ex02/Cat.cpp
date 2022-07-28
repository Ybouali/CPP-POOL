#include "./Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
    this->myBrain = new Brain();
    return ;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->myBrain;
    return;
}

Cat::Cat(const Cat & other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat & other)
{
    this->type = other.type;
    *(this->myBrain) = *(other.getBrain());
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat :: Cat sound <meaw meaw meaw meaw meaw ...>" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
    return this->myBrain;    
}