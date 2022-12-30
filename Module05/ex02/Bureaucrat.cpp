#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int nbr):name(name)
{
    setGrade(nbr);
    std::cout << "Called Constructor: " << name << "  ";
    std::cout << nbr << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Removed Constructor" << std::endl;
}
Bureaucrat::Bureaucrat():name("uwu"),grade(150)
{
    std::cout << "Default Constructor" << std::endl;
}

void Bureaucrat::setGrade(int grade_){
    if (grade_ < 1)
        throw GradeTooHighException();
    else if (grade_ > 150)
        throw GradeTooLowException();
    else{
        this->grade = grade_;

    }
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &var){
    if (this == &var)
        return *this;
    this->setGrade(var.grade);
    return *this;
}

std::string Bureaucrat::getName()
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::signForm(const Form &var) const {
    var.beSigned(*this);
}