#include "./Animal.hpp"

Animal::Animal(std::string type)
{
    this->type = type;
    return ;
}

Animal::Animal(void)
{
    this->type = "animal";
    return ;
}
Animal::~Animal()
{
    return ;
}

Animal& Animal::operator=(const Animal &other)
{
    this->type = other.type;
    return *this;
}

Animal::Animal(const Animal & other)
{
    *this = other;
}


const std::string& Animal::getType() const
{
    return this->type;
}
void Animal::makeSound()  const
{
    std::cout << "Animal : Animal make a sound --------" << std::endl;
}