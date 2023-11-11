
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
	// weapon =
}
HumanB::~HumanB() {}

void HumanB::attack() {
	std::cout << "attacks with their" << weapon.getType() <<  std::endl;
}