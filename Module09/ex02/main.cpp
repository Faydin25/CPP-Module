#include "PmergeMe.h"

void ft_routine(char **av)
{
	Data data;
	data.setClock();
	int i = 0;
	while(av[++i])
		data.setList(av[i]);
	data.ft_control();
	int t = 0;
	std::cout << "Before: ";
	while (av[++t])
		std::cout << av[t] << " ";
	std::cout << std::endl;
	///////////////////////////////////////////////////////////
	clock_t end = clock();
	double diff = double(end - data.getClock()) / (CLOCKS_PER_SEC/1000000);
	long long nbr = diff;
	std::chrono::milliseconds time(nbr);
	data.getShort();
	data.getPrint();
	std::cout << "Time to process a range of elements with std::list : ";
	std::cout << time.count() << " us" << std::endl;
}

void ft_routine2(char **av)
{
	Data data2;
	data2.setClock2();
	int i = 0;
	while(av[++i])
		data2.setList(av[i]);
	data2.ft_control2();
	///////////////////////////////////////////////////////////
	clock_t end = clock();
	double diff = double(end - data2.getClock2()) / (CLOCKS_PER_SEC/1000000);
	long long nbr = diff;
	std::chrono::milliseconds time(nbr);
	std::cout << "Time to process a range of elements with std::multiset : ";
	std::cout << time.count() << " us" << std::endl;
}

int main(int ac, char **av)
{
	if (ac <= 1) {
		std::cerr << "Error!" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		ft_routine(av);
		ft_routine2(av);
	}
	return 0;
}