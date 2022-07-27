#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(std::string type);
        Animal(void);
        ~Animal();
        Animal& operator=(const Animal & other);
        Animal(const Animal & other);

        const std::string& getType() const;
        virtual void makeSound() const;
};

#endif