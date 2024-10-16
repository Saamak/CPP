#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria() : _type("") {}
    	AMateria(std::string const & type);
		virtual ~AMateria() {}
		AMateria(const AMateria& cpy);
		AMateria& operator=(const AMateria& src);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
