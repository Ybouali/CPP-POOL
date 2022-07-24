#include "./Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->raw = 0;
    return;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(n << this->bits);
    return;
}

Fixed::Fixed(float const n)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(std::round(n * (1 << this->bits)));
    return;
}

Fixed &Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const
{
    return this->raw;
}

void Fixed::setRawBits(int const raw)
{
    this->raw = raw;
    return;
}

float Fixed::toFloat(void) const
{
    return (float)this->raw / (float)(1 << this->bits);
}
int Fixed::toInt(void) const
{
    return this->raw >> this->bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
    os << other.toFloat();
    return os;
}