#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  const Animal *meta = new Animal();
  const WrongAnimal *wa = new WrongAnimal();
  const WrongAnimal *wc = new WrongCat();
  const WrongCat *test = new WrongCat();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  delete meta;
  meta = j;
  std::cout << "this is a " << meta->getType() << " " << std::endl;
  std::cout << "this is a " << j->getType() << " " << std::endl;
  std::cout << "this is a " << i->getType() << " " << std::endl;
  std::cout << "this is a " << wc->getType() << " " << std::endl;
  std::cout << "this is a " << wa->getType() << " " << std::endl;

  i->makeSound();    // cat sound
  j->makeSound();    // dog sound
  meta->makeSound(); // no sound
  wc->makeSound();   // wrong animal sound
  wa->makeSound();   // No polymorphism so wrong animal sound
  test->makeSound(); // wrong cat sound

  delete test;
  delete wc;
  delete wa;
  delete i;
  delete j;
}
