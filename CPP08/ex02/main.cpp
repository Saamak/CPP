#include "MutantStack.hpp"


int main()
{
	// Création d'une instance de MutantStack de type int
	MutantStack<int> mstack;

	// Ajout de l'élément 5 dans la pile
	mstack.push(5);
	// Ajout de l'élément 17 dans la pile
	mstack.push(17);
	// Affichage de l'élément au sommet de la pile (17)
	std::cout << mstack.top() << std::endl;
	// Suppression de l'élément au sommet de la pile (17)
	mstack.pop();

	// Affichage de la taille de la pile (1)
	std::cout << mstack.size() << std::endl;

	// Ajout de plusieurs éléments dans la pile
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	// Création d'itérateurs pour parcourir la pile
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	// Incrémentation et décrémentation de l'itérateur
	++it;
	--it;

	// Parcours de la pile et affichage des éléments
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	// Création d'une pile std::stack à partir de MutantStack
	std::stack<int> s(mstack);

	return 0;
}
