#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::~AMateria(){
	std::cout << "AMateria basic destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& cpy)
{
	*this = cpy;
}

AMateria& AMateria::operator=(const AMateria& src) {
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

std::string const & AMateria::getType() const{
	return _type;
}

void AMateria::use(ICharacter& target){

	Ice : "* shoots an ice bolt at <name> *"
}
