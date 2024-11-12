#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm(145, 137, "Shrubbery Form"){
	std::cout << "Shrubbery Form constructor called" << std::endl;
	// this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Form destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : AForm(cpy) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if (this != &src)
		this->target = src.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{

	std::cout << "EXECUTION SHRUBERRY" << std::endl;
}
