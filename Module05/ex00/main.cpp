#include "Bureaucrat.hpp"

int main(void)
{

    try
    {
        Bureaucrat bur("Yiğit", 2);
        
    }
    catch(const std::exception& s)
    {
        std::cerr << s.what() << std::endl;
    }
}