#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Data
{
	public:
		typedef std::map<std::string, double, std::greater<std::string> > m_type;
		Data();
		~Data();
		void	setFile(std::string file);
		m_type getCsv();
	private:
	m_type csv;
	//std::map<std::string, double> file;
	std::deque<double> file_double;
	std::deque<std::string> file_date;

};