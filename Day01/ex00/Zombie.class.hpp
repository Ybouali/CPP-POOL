#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define LEN_NAME_ZOMBIE 5

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void setName(std::string name);
        std::string getName();
        void announce(void);
};



#endif