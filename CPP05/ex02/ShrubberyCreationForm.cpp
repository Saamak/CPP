#include "ShrubberyCreationForm.hpp"
#include "colors.h"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm(145, 137, "Shrubbery Form"){
	std::cout << "[Shrubbery Form] constructor called" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(){
	std::cout << "[Shrubbery Form] basi constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "[Shrubbery Form] destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : AForm(cpy) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if (this != &src)
		this->target = src.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->get_isSigned())
		throw AForm::NotSigned();
	if (executor.getGrade() <= this->getGradeToExec()) {
		std::string filename = target + "_shrubbery";
		std::cout << B_G << "EXECUTION SHRUBERRY" << RESET << std::endl;

		// Check if the file exists and delete it if it does
		std::ifstream ifs_check(filename);
		if (ifs_check) {
			ifs_check.close();
			std::remove(filename.c_str());
		}

		// Write to the file
		{
			std::ofstream ofs(filename, std::ios::out);
			if (!ofs) {
				std::cerr << "Error: Could not create or open the file '" << filename << "' for writing." << std::endl;
				return;
			}
			ofs << _tree;
			ofs.close();
		}

		// Read from the file and display its content
		{
			std::ifstream ifs(filename);
			if (!ifs) {
				std::cerr << "Error: Could not open the file '" << filename << "' for reading." << std::endl;
				return;
			}
			std::string content;
			while (std::getline(ifs, content)) {
				std::cout << content << std::endl;
			}
			ifs.close();
		}
	} else {
		throw AForm::GradeTooLowException();
	}
}
