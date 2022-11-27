#include "Harl.hpp"

void Harl::harlFilter(int expression)
{
    switch (expression)
    {
        case 1:
            std::cout << "WARNING: ..." << std::endl;
        case 2:
            std::cout << "ERROR: ..." << std::endl;
        case 3:
            std::cout << "INFO: ..." << std::endl;
        case 4:
            std::cout << "DEBUG: ..." << std::endl;
            break ;
        default:
            std::cout << "Wrong Arg!" << std::endl;
            break;
    }
}