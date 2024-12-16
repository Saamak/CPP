#include "cat.hpp"

Cat::Cat()  : Animal("Cat") {
	std::cout << "God created a Cat" << std::endl;
}

Cat::~Cat() {
	std::cout << "God killed a Cat" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
	*this = cpy;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "* Miaw." << std::endl;
}
