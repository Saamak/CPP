#include "RobotomyRequestForm.hpp"
#include "colors.h"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm(72, 45, "Robotomy Form"){
	std::cout << "[Robotomy Form] constructor called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[Robotomy Form] destructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(){
	std::cout << "[RobotomyRequestForm Form] basi constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm(cpy) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	if (this != &src)
		this->target = src.target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (!this->get_isSigned())
		throw AForm::NotSigned();
	if (executor.getGrade() <= this->getGradeToExec())
	{
		std::cout << "* drilling noises *" << std::endl;
		if (rand() % 2 == 0)
			std::cout << target << " has been robotomized" << std::endl;
		else
			std::cout << "Fail to robotomize " << target << std::endl;
	} else
		throw GradeTooLowException();
}
