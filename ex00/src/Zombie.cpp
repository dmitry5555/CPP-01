#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
	Zombie::name = name;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// std::string randomName = "Name" + std::to_string(rand() % 1000);
void Zombie::randomChump(std::string name) {
	Zombie* aZombie = new Zombie(name);
	aZombie->announce();
	delete(aZombie);
}

Zombie::~Zombie() {
	std::cout << "Destructor" << std::endl;
}