#ifndef ROBOTOMY_REQUESTFORM_HPP
#define ROBOTOMY_REQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	private:
		std::string target;
	public :
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& cpy);
		RobotomyRequestForm &operator=(const  RobotomyRequestForm& src);
		void execute(Bureaucrat const &executor) const;
};

#endif
