#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"


class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& cpy);
		Cat& operator=(const Cat& src);
		~Cat();
		void makeSound() const;

};


#endif
