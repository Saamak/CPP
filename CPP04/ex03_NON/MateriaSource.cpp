#include "MateriaSource.hpp"

//Init all
MateriaSource::MateriaSource() : count(0) {
	for (int i = 0; i < 4; ++i) {
		source[i] = nullptr;
	}
}

//destroy materias
MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		delete source[i];
	}
}

//Learn
void MateriaSource::learnMateria(AMateria* m) {
	if (count < 4 && m != nullptr) {
		source[count] = m->clone();
		++count;
	}
}

// Create Materia
AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < count; ++i) {
		if (source[i] && source[i]->getType() == type) {
			return source[i]->clone();
		}
	}
	return nullptr;
}
