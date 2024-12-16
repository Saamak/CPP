#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character(std::string const &name) {
  if (name.empty())
    this->_name = "empty";
  else
    this->_name = name;
  std::cout << this->_name << " has appeared" << std::endl;
  for (int i = 0; i < 3; i++)
    this->_inventory[i] = NULL;
}

Character::Character(const Character &src) {
  this->_name = src._name;
  for (int i = 0; i < 3; i++) {
    if (src._inventory[i])
      this->_inventory[i] = src._inventory[i]->clone();
    else
      this->_inventory[i] = NULL;
  }
}

Character &Character::operator=(const Character &cpy) {
  if (this != &cpy) {
    this->_name = cpy._name;
    for (int i = 0; i < 3; i++) {
      if (this->_inventory[i])
        delete this->_inventory[i];
      if (cpy._inventory[i])
        this->_inventory[i] = cpy._inventory[i]->clone();
      else
        this->_inventory[i] = NULL;
    }
  }
  return *this;
}

Character::~Character() {
  std::cout << this->_name << " has been destroyed" << std::endl;
  for (int i = 0; i < 3; i++) {
    if (this->_inventory[i]) {
      delete this->_inventory[i];
    }
  }
}

void Character::equip(AMateria *m) {
  if (!m || m->get_bool())
    return;
  std::cout << this->_name << " equipping materia" << std::endl;
  for (int i = 0; i < 3; i++) {
    if (this->_inventory[i] == m) {
      std::cout << "Materia is already equipped" << std::endl;
      return;
    }
  }
  for (int i = 0; i < 3; i++) {
    if (!this->_inventory[i]) {
      this->_inventory[i] = m;
      m->set_bool();
      return;
    }
  }
  std::cout << "Inventory is full deleting materia" << std::endl;
}

void Character::getInventory() {
  std::cout << "[ CHARACTER INVENTORY ] : " << this->_name << std::endl;
  for (int i = 0; i < 3; i++) {
    if (this->_inventory[i])
      std::cout << "[ " << i << " ] : " << this->_inventory[i]->getType()
                << " materia" << std::endl;
  }
}

void Character::unequip(int idx) {
  if (idx < 0 || idx > 3)
    return;
  if (this->_inventory[idx] != NULL) {
    std::cout << "Unequipping materia at index " << idx << " in the inventory"
              << std::endl;
    this->_inventory[idx] = NULL;
  } else
    std::cout << "No materia in this slot" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
  if (idx < 0 || idx > 3)
    return;
  if (this->_inventory[idx] != NULL) {
    this->_inventory[idx]->use(target);
    this->_inventory[idx] = NULL;
  } else
    std::cout << "No materia in this slot to use" << std::endl;
}

std::string const &Character::getName() const { return (this->_name); }

// void Character::getInventory(){
// 	std::cout << "[INVENTORY]" << std::endl;
// 	for(int i = 0; i < 3; i++)
// 	{
// 		if(this->_inventory[i])
// 			std::cout << this->_inventory[i] << std::endl;
// 	}
// }

AMateria *Character::getMateria(int idx)
{
	return this->_inventory[idx];
}
