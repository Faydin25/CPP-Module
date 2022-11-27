#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
  std::ifstream file(av[1]);
  std::string filename = av[1];
  std::string buff;

  if (file.is_open())
  {
    std::ofstream output(filename);
    buff << file.rdbuf();
  }
  return 0;
}