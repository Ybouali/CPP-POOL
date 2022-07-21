#include "./Fixed.hpp"

const int    Fixed::rawBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->s_fixed_piont = 0;
    return ;
}

Fixed& Fixed::operator=(Fixed& const other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->rawBits = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed& other)
{
    this->s_fixed_piont = other.s_fixed_piont;
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->s_fixed_piont;
}

void Fixed::setRawBits(int  const raw)
{
    this->s_fixed_piont = raw;
    return ;
}