#pragma once

#include <iostream>
#include <list>
#include <set>
#include <ctime>
#include <chrono>


class Data
{
	public:
		Data();
		~Data();
		void setList(std::string nbr);
		void setList2(std::string nbr);
		void setClock();
		void setClock2();
		clock_t getClock();
		clock_t getClock2();
		void getPrint();
		void getPrint2();
		void getShort();
		void ft_control2();
		void ft_control();
		void ft_error(std::string str)
		{
			std::cerr << str << std::endl;
			exit(EXIT_FAILURE);
		}
private:
		std::list<int> mylist;
		std::multiset<int> multiset;
		clock_t list_start;
		clock_t multiset_start;
};
