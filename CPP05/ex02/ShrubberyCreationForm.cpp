#include "ShrubberyCreationForm.hpp"
#include "colors.h"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm(145, 137, "Shrubbery Form"){
	std::cout << "[Shrubbery Form] constructor called" << std::endl;
	this->target = target;
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

int ShrubberyCreationForm::execute(Bureaucrat const &executor) const{

	if (!this->get_isSigned())
        throw AForm::NotSigned();
	if(executor.getGrade() <= this->getGradeToExec())
	{
		std::string filename = target + "_shrubbery";
		std::cout <<B_G << "EXECUTION SHRUBERRY" <<RESET<< std::endl;
		// Write to the file
		{
			std::ofstream ofs(filename, std::ios::out | std::ios::app);
			if (!ofs) {
				std::cerr << "Error: Could not create or open the file 'caca' for writing." << std::endl;
				ofs.close();
				return 1;
			}
			ofs << _tree;
			ofs.close();
		}

		// Read from the file and display its content
		{
			std::ifstream ifs(filename);
			if (!ifs) {
				std::cerr << "Error: Could not open the file 'caca' for reading." << std::endl;
				ifs.close();
				return 1;
			}
			std::string content;
			while (std::getline(ifs, content)) {
				std::cout << content << std::endl;
			}
			std::cout << content << std::endl;
			ifs.close();
		}
	}
	else
		throw AForm::GradeTooLowException();
	return 0;
}
