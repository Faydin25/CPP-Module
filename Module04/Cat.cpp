#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat ";
}


void Cat::makeSound() const
{
    std::cout << "Miyaw" << std::endl;
}


Cat::~Cat()
{

}