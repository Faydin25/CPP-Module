#include "BitcoinExchange.hpp"

Data::m_type Data::getCsv()
{
	return this->csv;
};

void Data::setFile(std::string _file)
{
	std::ifstream file(_file);
	int i = 0;
	if (!file.is_open())
	{
		std::cout << "File Not Found" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	m_type::iterator  it;
	it = this->csv.begin();
	while (std::getline(file, line))
	{
		if (line[0] != std::isdigit(line[0]))
			i = 1;
		if (i == 0)
		{
			i++;
			continue;
		}
		size_t pos = line.find('|');
		if (pos == std::string::npos)
		{
			std::cout << "Error : Invalid Parameter" << std::endl;
			continue;
		}
		std::string date = line.substr(0, pos);
		double value;
		try
		{
			value = std::stod(line.substr(pos + 1));
		}
		catch (...)
		{
			std::cout << "Error : Wrong Parameter" << std::endl;
			continue;
		}
		this->file_double.push_back(value);
		this->file_date.push_back(date);
		std::cout << this->file_date.back() << "=> " << this->file_double.front() << " = ";
		if (ft_check(date)) {
			std::cerr << "Error, Wrong Date!" << std::endl;
			continue;
		}
		m_type::iterator it2 = csv.upper_bound(date);
		if(it2 != csv.end())
			std::cout << this->file_double.front() * it2->second << std::endl;
		if (it != this->csv.end())
			it++;
	}
	file.close();
}


Data::Data()
{
	std::ifstream file("./data.csv");
	int i = 0;
	if (!file.is_open())
	{
		std::cout << "File Not Found" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	while(std::getline(file, line))
	{
		if (i == 0)
		{
			i = 1;
			continue;
		}
		size_t pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cout << "Error : Invalid Parameter" << std::endl;
			continue;
		}
		std::string date = line.substr(0, pos);
		double value;
		try
		{
			value = std::stod(line.substr(pos + 1));
		}catch(...){
			std::cout << "Error : Wrong Parameter" << std::endl;
			continue;
		}
		this->csv[date] = value;
	}
	file.close();

	std::map<std::string, double>::iterator  it;
	//for (it = this->csv.begin(); it != this->csv.end(); it++)
	//{
	//	std::cout << "date => " << it->first << " value => " << it->second << std::endl;
	//}
};

bool Data::ft_check(std::string date)
{
	int i = 0;

	while(date[i] && date[i] != '-' && date[i] != '|')
		i++;
	int year = std::stoi((date.substr(0,i)));
	i++;
	int n = i;
	while(date[i] && date[i] != '-' && date[i] != '|')
		i++;
	int month = std::stoi((date.substr(n,i)));
	i++;
	n = i;
	while(date[i] && date[i] != '-' && date[i] != '|')
		i++;
	i--;
	int day = std::stoi((date.substr(n,i)));
	if (isDateValid(day,month,year))
		return false;
	return true;
}

bool Data::isDateValid(int day, int month, int year)
{
	if (month < 1 || month > 12 || year < 0 || day < 1) {
		return false;
	}
	if (month == 2) {
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			if (day > 29) {
				return false;
			}
		} else {
			if (day > 28) {
				return false;
			}
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30) {
			return false;
		}
	}
	else {
		if (day > 31) {
			return false;
		}
	}
	return true;
}

Data::~Data() {};