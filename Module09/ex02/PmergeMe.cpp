#include "PmergeMe.h"

Data::Data() {};

Data::~Data() {};

void Data::setList(std::string nbr)
{
	this->mylist.push_back(std::stoi(nbr));
}

void Data::setList2(std::string nbr)
{
	this->multiset.insert(std::stoi(nbr));
}

void Data::setClock()
{
	this->list_start = clock();
	//std::cout << "start:  " << this->list_start << std::endl;
}

void Data::setClock2()
{
	this->multiset_start = clock();
	//std::cout << "start:  " << this->list_start << std::endl;
}

clock_t Data::getClock()
{
	return this->list_start;
}

clock_t Data::getClock2()
{
	return this->multiset_start;
}

void Data::getPrint()
{
	std::list<int>::iterator it = this->mylist.begin();
	std::cout << "After: ";
	while (it != this->mylist.end()) {
		std::cout << *it << " ";//
		it++;
	}
	std::cout << std::endl;
}

void Data::getShort()
{
	this->mylist.sort();
}