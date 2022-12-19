#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}



void ClapTrap::attack(const std::string &target)
{
    if (ClapTrap::energyPoints > 0 && ClapTrap::attackDamage > 0)
        std::cout << ClapTrap::name << " attacked " << target << std::endl;
}

void ClapTrap::takeDemage(unsigned int amount)
{
    std::cout << "Damage: " << amount << std::endl;
    this->attackDamage--;
    std::cout << "Demage 1 decreased" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->energyPoints--;
    std::cout << "EnergyPoint 1 decreased" << std::endl;
    amount -= 1;
    std::cout << "Be Repaired" << std::endl;
}