#include "Weapon.hpp"

	Weapon::Weapon(std::string weapon)
	{
		_type = weapon;
	}

	Weapon::~Weapon(){}


	const std::string& Weapon::getType() const{
		return _type;
	}

	void	Weapon::setType(std::string type){
		_type = type;
	}
