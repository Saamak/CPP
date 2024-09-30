#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define RESET "\x1B[0m"


class Weapon{
	public :
		Weapon(std::string weapon);
		~Weapon();
		const std::string& getType() const;
		void	setType(std::string type);
	private :
		std::string _type;
};

#endif
