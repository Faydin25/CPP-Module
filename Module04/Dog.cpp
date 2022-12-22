#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog ";
}

void Dog::makeSound() const
{
    std::cout << "Haw Haww!" << std::endl;
}

Dog::~Dog()
{

}