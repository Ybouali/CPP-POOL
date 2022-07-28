#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "./Animal.hpp"

class WrongCat : public Animal 
{
    public:
        WrongCat(void);
        ~WrongCat();
        WrongCat& operator=(const WrongCat& other);
        WrongCat(const WrongCat & other);

        void    makeSound(void) const;
};

#endif