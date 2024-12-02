#include "BaseA.hpp"
#include "BaseC.hpp"
#include "BaseB.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

Base * generate(void){
	int i = std::rand() % 3;
	switch (i){
		case 0 : return new A;
		case 1 : return new B;
		case 2 : return new C;
	}
	return NULL;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (const std::bad_cast&) { }

	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (const std::bad_cast&) { }

	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (const std::bad_cast&) { }
	
	std::cout << "Unknown" << std::endl;
}

int main(){

	std::srand(std::time(0));
	Base *BU= generate();
	identify(BU);
	identify(BU);

}
