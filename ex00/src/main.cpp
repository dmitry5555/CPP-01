#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie* aZombie = new Zombie(name);
	return(aZombie);
}

void randomChump(std::string name) {
	Zombie* aZombie = new Zombie(name);
	aZombie->announce();
	delete(aZombie);
}

int main() {
	Zombie aZombie("Foo");
	randomChump("Foo1");

	return(0);
}