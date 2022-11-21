#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << Zombie::nbr + 1<< " ";
    std::cout << Zombie::name << " Hello, I am Zombie!" << std::endl;
}

int main(void)
{
    Zombie* zombies = zombieHorde(4, "zombie");
    for (int i = 0; i < 4; i++)
    {
        zombies[i].setNbr(i);
        zombies[i].announce();
    }
    delete[] zombies;
    return 0;
}