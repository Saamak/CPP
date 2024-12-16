#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &cpy);
	WrongCat &operator=(const WrongCat &src);
	~WrongCat();

	void makeSound() const;
};

#endif
