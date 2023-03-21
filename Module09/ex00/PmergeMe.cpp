#include "PmergeMe.h"

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
	while (std::getline(file, line))
	{
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
		std::cout << this->file_date.back() << "=> " << this->file_double.front() << " = " << std::endl;
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
Data::~Data() {};