#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal{
private:
	Brain *brain;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& var);
	~Cat();
	Cat &operator=(const Cat& var);
	void makeSound() const;
	std::string getType() const;
	void	compareTo ( const Cat& var ) const;
};

#endif
