#include "Convert.h"

int main(int ac,char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [value]" << std::endl;
		return 0;
	}
	Convert convert;
	convert.run(av[1]);
}