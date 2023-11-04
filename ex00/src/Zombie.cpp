#include "Zombie.hpp"

Zombie::Zombie() {
	name = "BraiiiiiiinnnzzzZ...";
}

void Zombie::announce(void) {
	std::cout << name << std::endl;
}

Zombie::~Zombie() {
}