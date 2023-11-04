#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name) {
	Zombie* aZombie = new Zombie(name);
	return(aZombie);
}
