#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define R   "\x1B[31m"
# define G   "\x1B[32m"
# define Y   "\x1B[33m"
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"

class Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& cpy);
		Animal& operator=(const Animal& src);
		~Animal();
		std::string getType() const;
		void setType(std::string &type);
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif