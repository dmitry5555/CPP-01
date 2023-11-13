
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
}

HumanB::~HumanB() {}

void HumanB::attack() {
	if (this->weapon->getType() != "") {
		std::cout << name << " attacks with " << this->weapon->getType() << std::endl;
	} else {
		std::cout << name << " no weapon to attack" << std::endl;
	}
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
