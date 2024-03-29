#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        void announce(void);
        void setName(std::string name);
        Zombie(std::string name);
        ~Zombie();
    private:
        std::string name;
};

#endif