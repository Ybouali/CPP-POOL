#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string typeWeapon;

    public:
        Weapon();
        ~Weapon();
        std::string getType();
        void setType(std::string type);
};

#endif