#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>
# include "AForm.h"

class AForm;

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name_);
	Bureaucrat(std::string name_, int grade_);
	Bureaucrat(const Bureaucrat& var);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat &var);

	class GradeTooHighException:public std::exception{
		public:
			const char *what() const throw(){
				return "Grade To High";
			}
	};
	class GradeTooLowException:public std::exception{
		public:
			const char	*what() const throw(){
				return "Grade To Low";
			}
	};

	int			getGrade() const;
	void		setGrade(int grade_);
	std::string getName() const;

	void signForm(const AForm& var) const;
	void executeForm(const AForm &form);
};

std::ostream &operator<<(std::ostream &out , const Bureaucrat& var);

#endif
