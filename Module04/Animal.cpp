#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Anon";
}

void Animal::WrongAnimal()
{
    std::cout << "Wrong" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "I can't do it xd" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

Animal::~Animal()
{

}