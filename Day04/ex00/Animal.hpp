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
        Animal& operator=(Animal &other);
        Animal(Animal *other);

        std::string getType();
};

#endif