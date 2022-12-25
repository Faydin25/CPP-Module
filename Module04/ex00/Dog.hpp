#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal{
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& var);
	~Dog();
	Dog &operator=(const Dog& var);
	void makeSound() const;
	std::string getType() const;
};


#endif