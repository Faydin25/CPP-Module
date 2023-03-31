#include "BitcoinExchange.h"

int main(int ac, char **av)
{
	(void)ac;
	Data data;
	data.setFile(av[1]);
	return 0;
}