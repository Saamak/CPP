#include "Bureaucrat.hpp"


// Default Constructor
Bureaucrat::Bureaucrat() : _name("default"), _grade(155) {
    std::cout << "Default constructor called" << std::endl;
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
	std::cout << B_R << "Bureaucrat " << _name << " has been destroyed." << RESET << std::endl;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void	Bureaucrat::upGrade(int value){
	_grade -= value;
}

void	Bureaucrat::downGrade(int value){
	_grade += value;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur) {
  os << B_Y << bur.getName() << RESET << ", bureaucrat grade " << B_G << bur.getGrade() << std::endl;
  return (os);
}

void Bureaucrat::signForm(Form &t) {
	try {
	t.beSigned(*this);
	std::cout << this->_name << " signed " << t.getName() << std::endl;
	} catch (std::exception &e) {
	std::cout << this->_name << " couldn’t sign " << t.getName() << " because "
				<< e.what() << std::endl;
	}
}
