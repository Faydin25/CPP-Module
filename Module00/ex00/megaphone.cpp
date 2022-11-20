#include <iostream>
#include <string>
#include <locale>

int main(int ac, char *av[])
{
    int i = 0;
    int j;

    if (ac == 1)
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
    else
    {
        while (++i < ac)
        {
            j = -1;
            std::string str(av[i]);
            while (++j < (int)str.length())
                std::cout << (char)std::toupper(str[j]);
        }
        std::cout << std::endl;
    }
    return 0;
}
