#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// If the value inside the address is modified at any point, the value will be modified both in A and B since they both point to the same location in memory
// This is a bad idea. If any variables were allocated on the heap -> deep copy!

int main( void )
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << "---------------" << std::endl;

	delete dog;
	delete cat;
	std::cout << "---------------" << std::endl;

	// Proof of deep copy
	Dog medor;
	Cat fifi;

	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	Dog & medor_copy_ref = medor_copy;
	Cat & fifi_copy_ref = fifi_copy;

	std::cout << std::endl << "comparing" << std::endl;

	medor.compareTo(medor_copy_ref);
	fifi.compareTo(fifi_copy_ref);
	std::cout << "---------------" << std::endl;


	// Array of animals
	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << "---------------" << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << "---------------" << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << "---------------" << std::endl;

	//system("leaks Poly");
}