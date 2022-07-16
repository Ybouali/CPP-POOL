#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "./Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        ~HumanA();
        HumanA(std::string name, Weapon &weapon);
        std::string getName();
        void setName(std::string name);
        void attack();
};

#endif