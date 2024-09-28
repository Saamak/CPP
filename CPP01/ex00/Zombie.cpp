#include "Zombie.hpp"

Zombie::Zombie(void){std::cout << this->_name << B_G" has been Created" << RESET << std::endl;}
Zombie::~Zombie(void){std::cout << this->_name << B_Y" has been destroyed" << RESET << std::endl;}

std::string Zombie::getName(void){return this->_name;};
void Zombie::setName(std::string name){this->_name = name;};



void Zombie::announce(void)
{
	std::cout << B_G << this->getName()<< RESET <<" : BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie* newZombie(std::string name){
	Zombie *New;

	New = new Zombie;
	New->setName(name);
	return (New);
}
