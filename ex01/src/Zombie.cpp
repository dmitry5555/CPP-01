#include "Zombie.hpp"

Zombie::Zombie() {
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	Zombie::name = name;
}

Zombie::~Zombie() {
	std::cout << "Destructor for: " << name << std::endl;
}