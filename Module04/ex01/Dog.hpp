#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal{
private:
	Brain *brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& var);
	~Dog();
	Dog &operator=(const Dog& var);
	void makeSound() const;
	std::string getType() const;
	void	compareTo ( const Dog& var ) const;
};


#endif