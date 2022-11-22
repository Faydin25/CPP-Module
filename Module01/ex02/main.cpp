#include <iostream>
int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringREF = &s;
    std::string &stringPTR = s;
    std::cout << "s: " << &s << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl;
    std::cout << "stringPTR: " << &stringPTR << std::endl << std::endl;
    std::cout << "s: " << s << std::endl;
    std::cout << "stringREF: " << *stringREF << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    return 0;
}