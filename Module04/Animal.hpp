#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
       virtual  void makeSound() const;
        void WrongAnimal();
        std::string getType() const;
        Animal();
        ~Animal();

    protected:
        std::string type;
};

#endif