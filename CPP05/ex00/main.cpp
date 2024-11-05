#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat B("Bob", 14);
		Bureaucrat bur("John Doe", 5);
		std::cout << bur;
		std::cout << B;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
