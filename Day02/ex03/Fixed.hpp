#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 raw;
        static const int    bits;
    public:
        Fixed(void);
        Fixed(Fixed const &other);
        Fixed(int const n);
        Fixed(float const n);
        ~Fixed();

        Fixed&  operator=(Fixed const &other);
        
        int     getRawBits(void) const;
        void    setRawBits(int  const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

        bool    operator==(const Fixed& other) const;
        bool    operator>(const Fixed& other) const;
        bool    operator>=(const Fixed& other) const;
        bool    operator<(const Fixed& other) const;
        bool    operator<=(const Fixed& other) const;
        bool    operator!=(const Fixed& other) const;

        Fixed    operator+(const Fixed& other) const;
        Fixed    operator-(const Fixed& other) const;
        Fixed    operator*(const Fixed& other) const;
        Fixed    operator/(const Fixed& other) const;

        Fixed& operator++(void);
        Fixed operator++(int);

        Fixed& operator--(void);
        Fixed operator--(int);

        static const Fixed& min(Fixed& other1, Fixed& other2);
        static const Fixed& min(const Fixed& other1, const Fixed& other2);

        static const Fixed& max(Fixed& other1, Fixed& other2);
        static const Fixed& max(const Fixed& other1, const Fixed& other2);

};

std::ostream& operator<<(std::ostream& os, const Fixed & other);

#endif