#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main() {

  std::cout << "MATERIA SOURCE" << std::endl;
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  std::cout << "CHARACTER MATERIA" << std::endl;
  Character *me = new Character("me");
  Character *qwe = new Character(NULL);
  Character *you = new Character("you");
  Character *cpy = new Character(*you);

  AMateria *tmp;
  AMateria *asd;
  qwe->use(0, *me);
  tmp = src->createMateria("ice");
  asd = src->createMateria("cure");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  tmp = src->createMateria("ice");
  me->equip(tmp);
  you->equip(tmp); // SIGSEV HERE
  cpy->equip(asd);
  you->use(0, *me);
  me->equip(tmp);
  me->equip(asd);
  me->unequip(2);
  delete me->getMateria(2);

  me->getInventory(); // before dropping
  me->unequip(1);
  me->getInventory(); // after dropping
  delete me->getMateria(1);

  std::cout << "ICHARACTER TESTING" << std::endl;
  ICharacter *test = new Character("test");
  delete test;
  test = me;
  test->use(0, *me);

  std::cout << "TESTING CHARACTER" << std::endl;
  Character *me2 = new Character(*me);
  *me2 = *me;
  me->getInventory();
  me2->use(0, *test);
  test->use(0, *test);
  test->use(2, *me);
  test->use(5, *me);
  ICharacter *bob = new Character("bob");
  test = bob;
  me->use(0, *bob);
  me->use(1, *bob);

  std::cout << "DESTRUCTOR" << std::endl;
  delete cpy;
  delete you;
  delete me2;
  delete me;
  delete bob;
  delete src;
  return 0;
}
