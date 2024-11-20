#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <exception>

int main() {
	// INTERN
	try {
		Bureaucrat bender("bender", 1);
		Intern someRandomIntern;
		AForm* rrf;
		// OPTION : shrubbery creation , robotomy request, presidential pardon
		rrf = someRandomIntern.makeForm("Shrubbery creation", "Bender");
		rrf->beSigned(&bender);
		bender.executeForm(rrf);
		delete rrf;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
