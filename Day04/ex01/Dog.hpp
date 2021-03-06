#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *myBrain;
    public:
        Dog(void);
        ~Dog();
        Dog& operator=(const Dog& other);
        Dog(const Dog & other);
        
        void    makeSound(void) const;
};

#endif