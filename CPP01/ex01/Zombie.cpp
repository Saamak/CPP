#include "Zombie.hpp"

Zombie::Zombie(void){std::cout <<B_G" A Zombie  has been Created" << RESET << std::endl;}
Zombie::~Zombie(void){std::cout <<B_R" A Zombie has been destroyed" << RESET << std::endl;}

std::string Zombie::getName(void){return this->_name;};
void Zombie::setName(std::string name){this->_name = name;};

// Zombie::Zombie(std::string str)
// 	: _name(str){std::cout<< "Z\n";};

void announce(std::string name)
{
	std::cout << B_G << name << RESET <<" : BraiiiiiiinnnzzzZ..." <<std::endl;
}
