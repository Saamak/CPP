#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource{
	private:
		AMateria* source[4];
		int count;
	public:
		MateriaSource();
		MateriaSource &operator=(const MateriaSource& cpy);
		virtual ~MateriaSource();
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	};

#endif
