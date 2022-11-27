#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon();
        Weapon(const std::string &s);
        void setType(const std::string &str);
        const std::string getType() const;

    private:
        std::string _weapon;
};

#endif