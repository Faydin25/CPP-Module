#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 2) {
		Data data;
		data.setFile(av[1]);
	}
	else {
		std::cout << "Error, Wrong Argumant." << std::endl;
		return 1;
	}
	return 0;
}