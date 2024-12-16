#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::~AMateria(){
	std::cout << "AMateria basic destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& cpy)
{
	*this = cpy;
}

AMateria& AMateria::operator=(const AMateria& src) {
	if (this != &src) {
		type = src.type;
	}
	return *this;
}

std::string const & AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter& target){

	std::cout << "Ice : * shoots an ice bolt at <name> *" << std::endl;
}
