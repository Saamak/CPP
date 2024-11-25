/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:07:16 by ppitzini          #+#    #+#             */
/*   Updated: 2024/11/25 19:09:10 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const int gradeToSign, const int gradeToExec, const std::string name)
	: _name(name), isSigned(false), gToSign(gradeToSign), gToExec(gradeToExec) {
	if (gToSign > 150 || gToExec > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (gToSign < 1 || gToExec < 1)
		throw Bureaucrat::GradeTooLowException();
	std::cout << B_G <<"Parameterized Form Constructor" << std::endl;
	std::cout << gToSign << " | " << gToExec << " : " << B_Y << _name << std::endl << std::endl;
}

Form::Form() : _name(""), isSigned(false), gToSign(0), gToExec(0) {
	std::cout << B_G << "Default Form Constructor" << std::endl;
}

Form::Form(const Form& cpy)
	: _name(cpy._name), isSigned(cpy.isSigned), gToSign(cpy.gToSign), gToExec(cpy.gToExec) {
	std::cout << "Copy Constructor called" << std::endl;
}

Form& Form::operator=(const Form& src) {
	if (this != &src) {
		// _name is const, so it cannot be assigned after initialization
		isSigned = src.isSigned;
		// gToSign and gToExec are const, so they cannot be assigned after initialization
	}
	std::cout << "Form " << _name << " has been assigned." << std::endl;
	return *this;
}

Form::~Form(){
    std::cout << B_R << "Form Destructor" << std::endl;
}

const int Form::getGradeToSign(void) const {
    return gToSign;
}

const std::string Form::getName() const {
    return _name;
}

const int Form::getGradeToExec(void) const {
    return gToExec;
}

bool Form::getIsSigned(void) const {
    return isSigned;
}

void Form::beSigned(Bureaucrat &b){
	if (b.getGrade() > getGradeToSign()) {
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		isSigned = 1;
		std::cout << "Bureaucrat " << b.getName() << B_Y << " has signed "<< RESET <<BOLD << "the Form : " << getName() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Form &form) {
	os << form.getGradeToSign() << " | " << form.getGradeToExec() << " : " << B_Y << form.getName() << std::endl;
	return (os);
}
