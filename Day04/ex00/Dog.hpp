#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        ~Dog();
        Dog& operator=(const Dog& other);
        Dog(const Dog & other);
        
        void    makeSound(void) const;
};

#endif