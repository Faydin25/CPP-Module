#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

struct Data{
	int a;
	char ch;
	bool b;
};

uintptr_t serialize( Data* ptr );
Data* deserialize( uintptr_t raw );

#endif
