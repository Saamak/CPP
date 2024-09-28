#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie Random;
	Random.setName(name);
	Random.announce();
}
