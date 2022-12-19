#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap atacker("emre");
    ClapTrap defender("Fero");
    
    atacker.attack("Fero");
    defender.takeDemage(5);

    // int energypoints = 10;
    // ClapTrap claptrap;

    // claptrap.setName();
    // claptrap.setDamage();
    // claptrap.setRepeired();
    // claptrap.setEnergypoint();
    // claptrap.attack("Tarik");
    // claptrap.takeDemage(claptrap.getDemage());
    // claptrap.beRepaired(claptrap.getRepeired());
}