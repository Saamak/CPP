#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"


class Cat : public AAnimal {
	public:
		Cat();
		Cat(const Cat& cpy);
		Cat& operator=(const Cat& src);
		~Cat();
		void makeSound() const;
	private :
		Brain* _brain;
};


#endif
