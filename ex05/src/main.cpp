#include "Harl.hpp"

int main() {
	std::string s;
	Harl harl;

	while(s != "EXIT")
	{
		std::cout << "enter a level: ";
		std::getline(std::cin, s);
		harl.complain(s);
	}
	return (0);
}
