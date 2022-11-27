#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
    HumanB();
    HumanB(const std::string &s);
    void attack();
    void setWeapon(Weapon &obj);

    private:
        std::string name;
        Weapon *_weapon;

};

#endif