#include "Zombie.hpp"

int main() {
	std::cout << "Creating Zombie One on the stack" << std::endl;
	Zombie zombie1("One");
	zombie1.announce();

	std::cout << "Creating Zombie Two on the heap" << std::endl;
	Zombie* zombi2 = newZombie("Two");
	zombi2->announce();


	std::cout << "Running randomChump" << std::endl;
	randomChump("Three");

	delete(zombi2);
	return(0);
}