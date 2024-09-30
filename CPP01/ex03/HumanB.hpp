#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public :
		HumanB(std::string name);
		~HumanB();
		void attack();
		std::string getName(void);
		void setName(std::string name);
		void setWeapon(Weapon* weapon);
	private :
		std::string _name;
		Weapon* _weapon;
};
#endif




