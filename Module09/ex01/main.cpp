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
	int i = -1;
	int count = 0;
	while (str[++i])
	{
		if (str[i] != ' ' && str[i] != '1' && str[i] != '2' && str[i] != '3' \
		&& str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' \
		&& str[i] != '8' && str[i] != '9' && str[i] != '0' && str[i] != '*' \
		&& str[i] != '+' && str[i] != '-' && str[i] != '/') {
			ft_error("Wrong Input!!");
		}
	}
	i = -1;
	while (str[++i])
		if (str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-')
			count++;
	if (count <= 0)
		ft_error("Wrong Input!!!!");
}

void	ft_control2(std::vector<int> nbr, std::vector<std::string> mark)
{
	int nbr_count = 0;
	int str_count = 0;
	int i = -1;

	std::vector<std::string>::iterator x;
	x = mark.end();
	std::vector<int>::iterator y;
	y = nbr.end();
	while(nbr[++i] != *(y))
		nbr_count++;
	nbr_count--;
	i = -1;
	while(mark[++i] != *(x))
		str_count++;
	if (nbr_count != str_count)
		ft_error("->Wrong Input!!!");
	i = -1;
	while(nbr[++i] != *(y))
		if (nbr[i] > 9 || nbr[i] < 0)
			ft_error("Error: Number So Big.");
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
	int count = 0;
	std::vector<std::string>::iterator x;
	std::vector<int> nbr;
	std::vector<std::string> tokens = split(str, " ");
	x = tokens.end();
	while (tokens[++i] != *(x))
	{
		if (tokens[i] == "1" || tokens[i] == "2" || tokens[i] == "3" ||
		tokens[i] == "4" || tokens[i] == "5" || tokens[i] == "6" || tokens[i] == "7" ||
		tokens[i] == "8" || tokens[i] == "9" || tokens[i] == "0")
		{
			count++;
			nbr.push_back(std::stoi(tokens[i]));
		}
	}
	if (count < 1)
		ft_error("Wrong Input!!!!!!");
	return nbr;
}

void ft_go_algorithm(std::vector<std::string> mark, std::vector<int> nbr)
{
	int	int_nbr = 1;
	int int_mark;

	std::vector<int>::iterator x;
	std::vector<std::string>::iterator y;
	x = nbr.end();
	y = mark.end();
	while(nbr[int_nbr] && nbr[int_nbr] != *(x))
	{
		int_mark = int_nbr - 1;
		if (mark[int_mark] != *(y) && mark[int_mark] == "*")
			nbr[int_nbr] = nbr[int_nbr - 1] * nbr[int_nbr];
		else if (mark[int_mark] != *(y) && mark[int_mark] == "/")
			nbr[int_nbr] = nbr[int_nbr - 1] / nbr[int_nbr];
		else if (mark[int_mark] != *(y) && mark[int_mark] == "-")
			nbr[int_nbr] = nbr[int_nbr - 1] - nbr[int_nbr];
		else if (mark[int_mark] != *(y) && mark[int_mark] == "+")
			nbr[int_nbr] = nbr[int_nbr - 1] + nbr[int_nbr];
		int_nbr++;
	}
	std::cout << "Result: " << nbr[int_nbr - 1] << std::endl;
}

void	ft_routine(Data *data, std::string str)
{
	(void)data;
	ft_control(str);
	std::vector<int> nbr = ft_process(str);
	std::vector<std::string> mark = ft_process2(str);
	ft_control2(nbr, mark);//
	ft_go_algorithm(mark, nbr);
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
