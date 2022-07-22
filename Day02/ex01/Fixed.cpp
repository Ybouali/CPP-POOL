#include "./Fixed.hpp"

const int    Fixed::bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->raw = 0;
    return ;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->raw;
}

void Fixed::setRawBits(int const raw)
{
    this->raw = raw;
    return ;
}