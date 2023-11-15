#include "Zombie.hpp"

#define N 3

int main()
{
	Zombie *zmbeez = zombieHorde(N, "zmb_name");

	zmbeez[0].announce();
	delete[] zmbeez;
	return(0);
}