#include "Form.hpp"

Form::Form():name("Saksay Abe"),required(150),isSigned(false)
{
    std::cout << "Called Constructer" << std::endl;
}

Form::~Form()
{
    std::cout << "Removed Constructer" << std::endl;
}

Form::Form(std::string name, int required):name(name),required(required),isSigned(false)
{
    std::cout << "Name Called Constructer" << std::endl;
}

void Form::beSigned(const Bureaucrat &var) const {
    if (var.getGrade() > this->required)
        throw GradeTooLowException();
    else {
        this->isSigned = true;
        std::cout << "Bureaucrat signed the form" << std::endl;
    }
}