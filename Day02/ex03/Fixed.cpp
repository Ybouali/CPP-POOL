#include "./Fixed.hpp"

const int    Fixed::bits = 8;

Fixed::Fixed(void)
{
    this->raw = 0;
    return ;
}

Fixed::Fixed(int const n)
{
    this->setRawBits(n << this->bits);
    return ;
}
Fixed::Fixed(float const n)
{
    this->setRawBits(std::round(n * (1 << this->bits)));
    return ;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    this->raw = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    return ;
}

Fixed::Fixed(Fixed const &other)
{
    *this = other;
    return ;
}

int Fixed::getRawBits(void) const
{
    return this->raw;
}

void Fixed::setRawBits(int const raw)
{
    this->raw = raw;
    return ;
}

float   Fixed::toFloat(void) const
{
    return (float)this->raw / (float)(1 << this->bits);
}
int     Fixed::toInt(void) const
{
    return this->raw >> this->bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed & other)
{
    os << other.toFloat();
    return os;
}

// --------------------------- OPERATION -------------------------------------

bool    Fixed::operator>(const Fixed& other) const
{
    return this->raw > other.getRawBits();
}

bool    Fixed::operator>=(const Fixed& other) const
{
    return this->raw > other.getRawBits() || *this == other;
}

bool    Fixed::operator<(const Fixed& other) const
{
    return this->raw < other.getRawBits();
}

bool    Fixed::operator<=(const Fixed& other) const
{
    return this->raw < other.getRawBits() || *this == other;
}

bool    Fixed::operator==(const Fixed& other) const
{
    return this->raw == other.getRawBits();
}

bool    Fixed::operator!=(const Fixed& other) const
{
    return !(*this == other);
}

Fixed    Fixed::operator+(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(this->raw + other.getRawBits());

    return result;
}

Fixed    Fixed::operator-(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(this->raw - other.getRawBits());

    return result;
}

Fixed    Fixed::operator*(const Fixed& other) const
{
    Fixed result;

    result.setRawBits((this->raw * other.getRawBits()) >> this->bits);

    return result;
}

Fixed    Fixed::operator/(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(((float)this->raw / (float)other.getRawBits()) * (1 << this->bits));

    return result;
}

Fixed&      Fixed::operator++(void)
{
    ++(this->raw);
    return *this;
}

Fixed      Fixed::operator++(int)
{
    Fixed result(*this);

    ++(*this);
    return result;
}

Fixed& Fixed::operator--(void)
{
    --(this->raw);
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed result(*this);

    --(*this);
    return result;
}

const Fixed& Fixed::min(Fixed& other1, Fixed& other2)
{
    if (other1 <= other2)
        return other1;
    return other2;
}

const Fixed& Fixed::min(const Fixed& other1, const Fixed& other2)
{
    if (other1 <= other2)
        return other1;
    return other2;
}

const Fixed& Fixed::max(Fixed& other1, Fixed& other2)
{
    if (other1 >= other2)
        return other1;
    return other2;
}

const Fixed& Fixed::max(const Fixed& other1, const Fixed& other2)
{
    if (other1 >= other2)
        return other1;
    return other2;
}