#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm(25, 5, "PresidentialPardonForm"), target("") {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm(25, 5, "PresidentialPardonForm"), target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
    : AForm(cpy), target(cpy.target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this != &src) {
		AForm::operator=(src);
		target = src.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!get_isSigned()) {
		throw NotSigned();
	}
	if (executor.getGrade() > getGradeToExec()) {
		throw GradeTooLowException();
	}
	std::cout <<"--->"<<B_G<< target << " has been pardoned by Zaphod Beeblebrox." <<RESET<< std::endl;
}
