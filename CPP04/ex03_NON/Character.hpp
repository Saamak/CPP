#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter {
	private:
		AMateria *_inventory[4];
		std::string _name;
	public:
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		std::string const &getName() const;
		void getInventory();
		AMateria *getMateria(int idx);

		Character(std::string const &name);
		Character(const Character &src);
		Character &operator=(const Character &cpy);
		virtual ~Character();
};

#endif
