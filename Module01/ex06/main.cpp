#include "Harl.hpp"

int main(void)
{
    Harl harl;

    int expression;
    std::cout << "Enter Number:  ";
    std::cin >> expression;
    harl.harlFilter(expression);
    return EXIT_SUCCESS;
}