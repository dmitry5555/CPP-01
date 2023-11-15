#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie* aZombie = new Zombie(name);
	aZombie->announce();
	delete(aZombie);
}