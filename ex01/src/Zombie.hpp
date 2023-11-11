#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
	private:
		std::string name;

	public:
		Zombie(std::string name);
		Zombie();
		void announce(void);
		void setName(std::string name);
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif