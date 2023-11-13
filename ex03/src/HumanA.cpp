
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}
HumanA::~HumanA() {}

void HumanA::attack() {
	if (this->weapon.getType() != "") {
		std::cout << name << " attacks with " << this->weapon.getType() << std::endl;
	} else {
		std::cout << name << " no weapon to attack" << std::endl;
		}
}