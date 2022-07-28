#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

#include "./Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal(void);
        AAnimal(std::string& type);
        virtual ~AAnimal();
        AAnimal& operator=(const AAnimal & other);
        AAnimal(const AAnimal & other);

        const std::string& getType() const;
        virtual void makeSound() const = 0;
        virtual Brain *getBrain( void ) const = 0;
};

#endif