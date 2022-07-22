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

};

std::ostream& operator<<(std::ostream& os, const Fixed & other);

#endif