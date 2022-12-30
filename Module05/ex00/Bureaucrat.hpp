#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int nbr);
        ~Bureaucrat();
        int getGrade();
        void setGrade(int grade_);
        std::string getName();
        Bureaucrat& operator=(const Bureaucrat &var);

    class GradeTooHighException :public std::exception
    {
		public:
			const char *what() const throw()
            {
				return "Grade To High";
			}
	};
	class GradeTooLowException :public std::exception
    {
		public:
			const char	*what() const throw()
            {
				return "Grade To Low";
			}
	};
};

#endif