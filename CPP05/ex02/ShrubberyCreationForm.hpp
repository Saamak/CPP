#ifndef SHRUBBERY_CREATION_HPP
#define SHRUBBERY_CREATION_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	private:
		std::string target;
	public :
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& cpy);
		ShrubberyCreationForm &operator=(const  ShrubberyCreationForm& src);
		const std::string _tree =
		"       /\\       \n"
		"      /  \\      \n"
		"     /    \\     \n"
		"    /      \\    \n"
		"   /        \\   \n"
		"  /__________\\  \n"
		"       ||       \n"
		"       ||       \n";
	void execute(Bureaucrat const &executor) const;
};

#endif
