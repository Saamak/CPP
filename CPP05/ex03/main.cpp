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
		// OPTION : Shrubbery creation , Robotomy request, Presidential pardon
		rrf = someRandomIntern.makeForm("Shrubbery creation", "Bender");
		rrf->beSigned(&bender);
		bender.signForm(*rrf);
		bender.executeForm(rrf);
		delete rrf;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
