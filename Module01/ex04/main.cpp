#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int	error(std::string status)
{
	std::cout << "Error : " << status << std::endl;
	return (1);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Wrong Argumant." << std::endl;
        return 1;
    }
    if (!av[2] || !av[3])
      std::cout << "Empty strings provided as arguments"<< std::endl;
    std::ifstream file(av[1]);//file aliniyor.
    std::stringstream buff;//string atılıyor.
    std::string filename = av[1];//dosyanın ismini alıyor.
    std::string content;
    std::string s1 = av[2];
    std::string s2 = av[3];
    int pos = 0;

    if (file.is_open())//is_open dosya açar, dosya yoksa return 0;
    {
      filename.append(".replace");//test->test.replace
      std::ofstream output(filename);
      buff << file.rdbuf();
      content = buff.str();
      while ((pos = content.find(s1, pos)) != std::string::npos)
      {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
      }
      output << content;
    }
    else
      return (error("File Doesn't exitst in this directory"));
    return 0;
}