#include "dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "God created a Dog" << std::endl;
}

Dog::~Dog(){
	std::cout << "God killed a Dog" << std::endl;

}

Dog::Dog(const Dog& cpy)
{
	*this = cpy;
}

Dog& Dog::operator=(const Dog& src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}


void Dog::makeSound() const
{
    std::cout << "* WOAF" << std::endl;
}
