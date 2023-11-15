
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zombeez = new Zombie[N];
	int i = 0;

	while(i < N)
		zombeez[i++].setName(name);
	return(zombeez);
}
