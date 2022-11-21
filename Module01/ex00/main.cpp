#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}

int main()
{
    Zombie *zombie = new Zombie("Foo");

    zombie->announce();
    zombie->setName("Berkay");
    zombie->announce();
    randomChump("Melih");
    delete zombie;
    return 0;
}