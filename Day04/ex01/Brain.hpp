#ifndef BRIAN_HPP
#define BRIAN_HPP

#include "./Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain& operator=(const Brain & other);
        Brain(const Brain & other);
};

#endif