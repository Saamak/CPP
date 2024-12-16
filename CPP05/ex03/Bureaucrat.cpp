#include "Bureaucrat.hpp"


// Default Constructor
Bureaucrat::Bureaucrat() : _name("default"), _grade(155) {
    std::cout << "[Default Bureaucrat constructor] called" << std::endl;
}
// Constructor Param
Bureaucrat::Bureaucrat(std::string const & name, int const & grade) : _name(name) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	} else
	{
		_grade = grade;
	}
	std::cout << B_G << "Bureaucrat " << _name << " has been created." << RESET << std::endl;
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : _name(cpy._name) {
	std::cout << "Bureaucrat " << _name << " has been copied." << std::endl;
}

// Copy Assignment Operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
	if (this != &src) {
		_grade = src._grade;
	}
	std::cout << "Bureaucrat " << _name << " has been assigned." << std::endl;
	return *this;
}

// Destructor
Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat " << _name << " has been destroyed." << std::endl;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void	Bureaucrat::upGrade(int value){
	if((this->_grade - value) > 1)
		_grade -= value;
	else
		std::cout << B_R << "upGrade impossible" << std::endl;
}

void	Bureaucrat::downGrade(int value){
	if((this->_grade + value) < 150)
		_grade += value;
	else
		std::cout << B_R << "DownGrade impossible" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return (B_R"Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return (B_R"Grade is too low!");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur) {
	os << B_Y << bur.getName() << RESET << ", bureaucrat grade " << B_G << bur.getGrade() << std::endl;
	return (os);
}

Bureaucrat Bureaucrat::executeForm(AForm const *form) {
	if (form == nullptr) {
		std::cout << this->getName() << " failed to execute form because it is null." << std::endl;
		return *this;
	}

	try {
		form->execute(*this);
		std::cout << this->getName() << " executed " << form->getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->getName() << " failed to execute " << form->getName() << " because " << e.what() << std::endl;
	}
	return *this;
}

void Bureaucrat::signForm(AForm &t) {
	try {
	t.beSigned(this);
	std::cout << this->_name << " signed " << t.getName() << std::endl;
	} catch (std::exception &e) {
	std::cout << this->_name << " couldn’t sign " << t.getName() << " because "
				<< e.what() << std::endl;
	}
}
