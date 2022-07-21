#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 s_fixed_piont;
        static const int    rawBits;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(Fixed& const other);
        int getRawBits(void) const;
        void setRawBits(int  const raw);
};


#endif