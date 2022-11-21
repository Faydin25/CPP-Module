#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        void setName(std::string _name);
        void announce();
        std::string getName();
        void setNbr(int _nbr);
    private:
        std::string name;
        int nbr;

};
Zombie* zombieHorde(int N, std::string name);

#endif