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
}

void Data::setClock2()
{
	this->multiset_start = clock();
}

clock_t Data::getClock()
{
	return this->list_start;
}

clock_t Data::getClock2()
{
	return this->multiset_start;
}


void Data::getShort()
{
	std::list<int> tmp;
	int i = this->mylist.size();
	while (i > 0)
	{
		std::list<int>::iterator it = std::min_element(this->mylist.begin(), this->mylist.end());
		tmp.push_back(*it);
		this->mylist.erase(std::min_element(this->mylist.begin(), this->mylist.end()));
		i--;
	}
	std::cout << "After: ";
	for (std::list<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void Data::ft_control()
{
	std::list<int>::iterator it = this->mylist.begin();
	while (it != this->mylist.end()) {
		if (*it < 0)
			ft_error("Error, Wrong Input!");
		it++;
	}
}

void Data::ft_control2()
{
	std::multiset<int>::iterator it = this->multiset.begin();
	while (it != this->multiset.end())
	{
		if (*it < 0)
			ft_error("Error, Wrong Input!");
		it++;
	}
}