#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){

	std::cout << "[Intern] constructor called"<< std::endl;
}

Intern::~Intern(){
	std::cout << "[Intern Destructor] called" << std::endl;
}


AForm *Intern::makeForm(std::string const &formName, std::string const &target){

	std::string name[] = {"Presidential pardon", "Robotomy request", "Shrubbery creation"};
	for(int i = 0; i < 3; i++)
	{
		if(name[i] == formName)
		{
			std::cout << "Intern Creates : ";
			switch(i){
				case 0:
					return (new PresidentialPardonForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new ShrubberyCreationForm(target));
			}
		}
	}

	throw NotAvailable();
	return (NULL);
}

const char *Intern::NotAvailable::what() const throw() {
  return ("Form is not recognized by the Intern");
}
