#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ScavTrap(name)
{
    this->name = name;
}

FragTrap::~FragTrap()
{
    ;
}

void    FragTrap::highFive( void )
{
    if ( this->energyPoints <= 0 ) {
        std::cout << "| FragTrap | - " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "| FragTrap | - " << this->name << " high fives everybody." << std::endl;
    this->energyPoints -= 1;
}