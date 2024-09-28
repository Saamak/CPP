#include "Zombie.hpp"

int main()
{
	Zombie *Z;
	Z = newZombie("DANIEL");
	Z->announce();
	delete Z;
	randomChump("ROBERTA");
}
