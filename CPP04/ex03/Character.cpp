#include "Character.hpp"

Character::Character(std::string name) : name(name) {}

Character::~Character() {}

std::string const & Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    // Implement this method
}

void Character::unequip(int idx) {
    // Implement this method
}

void Character::use(int idx, ICharacter& target) {
    // Implement this method
}
