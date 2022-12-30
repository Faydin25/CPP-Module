#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        ~Form();
        Form(std::string name, int execute, int required);
        void beSigned(const Bureaucrat &var) const;
        Form& operator=(const Form &var);
    class GradeTooHighException: public std::exception
    {
        public:
            const char *what() const throw(){
                return "GradeTooHigth";
            }
    };
class GradeTooLowException: public std::exception
{
    public:
        const char *what() const throw(){
            return "GradeTooLow";
        }
};
    private:
        const std::string name;
        const int execute;
        const int required;
        mutable bool isSigned;
};