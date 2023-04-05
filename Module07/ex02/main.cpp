#include "Array.h"

int main(int, char**)
{
	Array<int> numbers(750);
	int* mirror = new int[750];
	srand(time(NULL));
	for (int i = 0; i < 750; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	{
		Array<int> tmp = numbers;//new memory
		Array<int> test(tmp);//mirror memory
	}

	for (int i = 0; i < 750; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[750] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < 750; i++)
	{
		numbers[i] = rand();
        std::cout << numbers[i] << std::endl;
	}
	delete [] mirror;
	return 0;
}