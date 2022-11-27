#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA();
        HumanA(const std::string &s, Weapon &obj);
        void attack(void);

    private:
        std::string name;
        Weapon *_weapon;
};
#endif