#include "harl.hpp"

int main(void)
{
    Harl harl;
    std::string input;
    std::cout << "Enter a level: ";
    std::cin >> input;
    harl.complain(input);
    return EXIT_SUCCESS;
}