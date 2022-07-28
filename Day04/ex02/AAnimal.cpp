#include "./AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "AAnimal  Default constructor called" << std::endl;
    this->type = "AAnimal";
    return ;
}

AAnimal::AAnimal(std::string& type)
{
    std::cout << "AAnimal  Default constructor with type called" << std::endl;
    this->type = type;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
    return ;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
    this->type = other.type;
    return *this;
}

AAnimal::AAnimal(const AAnimal & other)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
    *this = other;
}


const std::string& AAnimal::getType() const
{
    return this->type;
}
