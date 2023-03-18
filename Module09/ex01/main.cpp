#include "RPN.h"

void	ft_error(std::string error)
{
	std::cout << error << std::endl;
	exit(EXIT_FAILURE);
}

std::vector<std::string> split(const std::string& str, const std::string& delimiters)
{
	std::vector<std::string> tokens;
	std::string::size_type last_pos = 0;

	// Find first delimiter
	std::string::size_type pos = str.find_first_of(delimiters, last_pos);

	while (pos != std::string::npos || last_pos != std::string::npos)
	{
		// Found a token, add it to the vector
		tokens.push_back(str.substr(last_pos, pos - last_pos));

		// Find next delimiter
		last_pos = str.find_first_not_of(delimiters, pos);
		pos = str.find_first_of(delimiters, last_pos);
	}

	return tokens;
}

void ft_control(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '1' && str[i] != '2' && str[i] != '3' \
		&& str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' \
		&& str[i] != '8' && str[i] != '9' && str[i] != '0' && str[i] != '*' \
		&& str[i] != '+' && str[i] != '-' && str[i] != '/') {
			ft_error("Wrong Input!!");
		}
		i++;
	}
}

std::vector<std::string> ft_process2(std::string str)
{
	int i = -1;
	std::vector<std::string> mark;
	std::vector<std::string>::iterator x;
	std::vector<std::string> tokens = split(str, " ");
	x = tokens.end();
	while (tokens[++i] != *(x))
	{
		if (tokens[i] == "*" || tokens[i] == "/" || tokens[i] == "+" || tokens[i] == "-")
			mark.push_back(tokens[i]);
	}
	return mark;
}

std::vector<int> ft_process(std::string str)
{
	int i = -1;
	std::vector<std::string>::iterator x;
	std::vector<int> nbr;
	std::vector<std::string> tokens = split(str, " ");
	x = tokens.end();
	while (tokens[++i] != *(x))
	{
		if (tokens[i] == "1" || tokens[i] == "2" || tokens[i] == "3" ||
		tokens[i] == "4" || tokens[i] == "5" || tokens[i] == "6" || tokens[i] == "7" ||
		tokens[i] == "8" || tokens[i] == "9" || tokens[i] == "0")
			nbr.push_back(std::stoi(tokens[i]));
	}
	return nbr;
}

void	ft_routine(Data *data, std::string str)
{
	ft_control(str);
	std::vector<int> nbr = ft_process(str);
	std::vector<std::string> mark = ft_process2(str);
}

int	main(int ac, char **av)
{
	if (ac == 2) {
		Data data;
		ft_routine(&data, av[1]);// Maybe ı can use copy const.
	}
	else
		ft_error("Wrong Input!");
	return 0;
}