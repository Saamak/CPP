#include "Zombie.hpp"

int main(void)
{
	Zombie* horde = zombieHorde(3, "ROBERTA");
	delete [] horde;
}
