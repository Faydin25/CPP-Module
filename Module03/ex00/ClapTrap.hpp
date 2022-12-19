#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        void attack(const std::string &target);
        void takeDemage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        ClapTrap(std::string name);
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
};

#endif