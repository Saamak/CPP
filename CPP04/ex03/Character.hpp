#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected :
		std::string _name;
		AMateria* inventory[4] = {nullptr, nullptr, nullptr, nullptr};
	public:
		Character(std::string name);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
