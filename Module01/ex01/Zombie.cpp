#include "Zombie.hpp"

void Zombie::setName(std::string _name)
{
    this->name = _name;
}

void    Zombie::setNbr(int _nbr)
{
    this->nbr = _nbr;
}

std::string Zombie::getName(void)
{
    return this->name;
}