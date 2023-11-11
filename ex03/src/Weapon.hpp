#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Weapon {
	private:
		std::string type;

	public:
		Weapon();
		~Weapon();
		const std::string& Weapon::getType*();

};

#endif