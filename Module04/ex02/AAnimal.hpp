#pragma once

#include <iostream>

class AAnimal {
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& var);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal& var);
	virtual std::string getType() const;
	virtual void makeSound() const = 0;
};


