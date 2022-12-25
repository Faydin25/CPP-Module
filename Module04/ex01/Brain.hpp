#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string *ideas;
public:
	Brain();
	Brain(std::string *var);
	Brain(const Brain& var);
	~Brain();
	Brain &operator=(const Brain& var);
	std::string *getIdeas() const;
};


#endif