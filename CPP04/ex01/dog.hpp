#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& cpy);
		Dog& operator=(const Dog& src);
		~Dog();
		void makeSound() const;
	private :
		Brain* _brain;
};

#endif
