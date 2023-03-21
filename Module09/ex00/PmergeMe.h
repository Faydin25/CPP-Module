#ifndef PMERGEME_H
#define PMERGEME_H

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


#endif

class Data
{
	public:
		Data();
		~Data();
		void setFile(std::string file);
	private:
	std::map<std::string, double> csv;
	std::map<std::string, double> file;
	std::deque<double> file_double;
	std::deque<std::string> file_date;

};