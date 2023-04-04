#include "RPN.h"

void ft_error(std::string error) {
	std::cout << error << std::endl;
	exit(EXIT_FAILURE);
}

std::vector<std::string> split(const std::string &str, const std::string &delimiters) {
	std::vector<std::string> tokens;
	std::string::size_type last_pos = 0;

	// Find first delimiter
	std::string::size_type pos = str.find_first_of(delimiters, last_pos);

	while (pos != std::string::npos) {
		// Found a token, add it to the vector
		tokens.push_back(str.substr(last_pos, pos - last_pos));

		// Find next delimiter
		last_pos = str.find_first_not_of(delimiters, pos);
		pos = str.find_first_of(delimiters, last_pos);
	}

	if (last_pos != std::string::npos) {
		tokens.push_back(str.substr(last_pos));
	}

	return tokens;
}

void ft_control(std::string str) {
	for (std::string::size_type i = 0; i < str.length(); i++) {
		char c = str[i];
		if (c != ' ' && !std::isdigit(c) && c != '*' && c != '+' && c != '-' && c != '/') {
			ft_error("Wrong Input!!");
		}
	}

	int count = 0;
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		char c = *it;
		if (c == '*' || c == '/' || c == '+' || c == '-') {
			count++;
		}
	}

	if (count == 0) {
		ft_error("Wrong Input!!!!");
	}
}

void ft_control2(const std::vector<int> &nbr, const std::vector<std::string> &mark) {
	int nbr_count = nbr.size();
	int str_count = mark.size();

	if (nbr_count != str_count + 1) {
		ft_error("->Wrong Input!!!");
	}

	for (std::vector<int>::const_iterator it = nbr.begin(); it != nbr.end(); ++it) {
		int num = *it;
		if (num < 0) {
			ft_error("Error");
		}
	}
	int count = 0;
	for (std::vector<int>::const_iterator it = nbr.begin(); it != nbr.end(); ++it)
		count++;
	if (count >= 10)
		ft_error("Error, So More Number!");

}

std::vector<std::string> ft_process2(std::string str) {
	std::vector<std::string> mark;
	std::vector<std::string> tokens = split(str, " ");

	for (std::vector<std::string>::const_iterator it = tokens.begin(); it != tokens.end(); ++it) {
		std::string token = *it;
		if (token == "*" || token == "/" || token == "+" || token == "-") {
			mark.push_back(token);
		}
	}

	return mark;
}

std::vector<int> ft_process(std::string str) {
	std::vector<int> nbr;
	std::vector<std::string> tokens = split(str, " ");

	for (std::vector<std::string>::const_iterator it = tokens.begin(); it != tokens.end(); ++it) {
		std::string token = *it;
		if (!token.empty() && std::isdigit(token[0])) {
			nbr.push_back(std::stoi(token));
		}
	}

	if (nbr.empty()) {
		ft_error("Wrong Input!!!!!!");
	}

	return nbr;
}

void ft_go_algorithm(const std::vector<std::string> &mark, std::vector<int> &nbr) {
	int int_nbr = 1;

	for (std::vector<std::string>::const_iterator it = mark.begin(); it != mark.end(); ++it) {
		std::string op = *it;
		if (op == "*") {
			nbr[int_nbr] = nbr[int_nbr - 1] * nbr[int_nbr];
		} else if (op == "/") {
			nbr[int_nbr] = nbr[int_nbr - 1] / nbr[int_nbr];
		} else if (op == "-") {
			nbr[int_nbr] = nbr[int_nbr - 1] - nbr[int_nbr];
		} else if (op == "+") {
			nbr[int_nbr] = nbr[int_nbr - 1] + nbr[int_nbr];
		}
		int_nbr++;
	}

	std::cout << "Result: " << nbr[int_nbr - 1] << std::endl;
}

void ft_routine(std::string str) {
	ft_control(str);
	std::vector<int> nbr = ft_process(str);
	std::vector<std::string> mark = ft_process2(str);
	ft_control2(nbr, mark);
	ft_go_algorithm(mark, nbr);
}

int main(int ac, char **av) {
	if (ac == 2) {
		ft_routine(av[1]);
	} else {
		ft_error("Wrong Input!");
	}
	return 0;
}