#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define NUMBER_OF_ZOMBIES 0

#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);
        std::string getName();
        void announce(void);
};

Zombie *zombieHorde(int N, std::string name);



#endif