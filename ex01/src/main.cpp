#include "Zombie.hpp"

#define N 10

int main()
{
	Zombie *zmbeez = zombieHorde(N, "zmb_name");
	// int i = 0;

	zmbeez[0].announce();

	delete[] zmbeez;
	return(0);
}