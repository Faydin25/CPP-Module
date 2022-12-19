#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "Debug" << std::endl;
}

void Harl::info()
{
    std::cout << "Info" << std::endl;
}

void Harl::warning()
{
    std::cout << "Warning!" << std::endl;
}

void Harl::error()
{
    std::cout << "Error" << std::endl;
}

void Harl::complain(std::string _level)//fonksiyona yolla input al switch case uygula.
{
    int level = stoi(_level);
    switch (level)
    {
        case 1:
            Harl::debug();
            break ;
        case 2:
            Harl::info();
            break ;
        case 3:
            Harl::error();
            break ;
        case 4:
        Harl::warning();
            break ;
        default:
            std::cout << "Wrong Input!" << std::endl;
            break ;
    }
}