#ifndef DOG_HPP
#define DOG_HPP

#include "./Brain.hpp"
#include "./AAnimal.hpp"

class Dog : public AAnimal
{
    private:
        Brain *myBrain;
    public:
        Dog(void);
        ~Dog();
        Dog& operator=(const Dog& other);
        Dog(const Dog & other);
        
        virtual void makeSound() const;
        virtual Brain *getBrain( void ) const;
};

#endif