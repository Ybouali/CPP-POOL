#ifndef BRIAN_HPP
#define BRIAN_HPP

#include "./AAnimal.hpp"

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain& operator=(const Brain & other);
        Brain(const Brain & other);
        std::string ideas[100];
};

#endif