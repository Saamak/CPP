/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:07:16 by ppitzini          #+#    #+#             */
/*   Updated: 2024/11/10 16:57:36 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const int gradeToSign, const int gradeToExec, const std::string name)
	: _name(name), _isSigned(false), _gToSign(gradeToSign), _gToExec(gradeToExec) {
	this->_isSigned = false;
	std::cout << "[Parameterized AForm] Constructor" << std::endl;
}

AForm::AForm() : _name(""), _isSigned(false), _gToSign(0), _gToExec(0) {
	std::cout << "[Default AForm] Constructor" << std::endl;
}

AForm::AForm(const AForm& cpy)
	: _name(cpy._name), _isSigned(cpy._isSigned), _gToSign(cpy._gToSign), _gToExec(cpy._gToExec) {
	std::cout << "[Copy Constructor] called" << std::endl;
}

AForm& AForm::operator=(const AForm& src) {
	if (this != &src) {
		// _name est const, donc il ne peut pas être assigné après l'initialisation
		_isSigned = src._isSigned;
		// _gToSign et _gToExec sont const, donc ils ne peuvent pas être assignés après l'initialisation
	}
	std::cout << "AForm " << _name << " has been assigned." << std::endl;
	return *this;
}

AForm::~AForm(){
	std::cout << "[AForm] Destructor" << std::endl;
}

int AForm::getGradeToSign(void) const {
	return _gToSign;
}

int AForm::getGradeToExec(void) const {
    return _gToExec;
}

std::string AForm::getName(void) const {
    return _name;
}

bool AForm::get_isSigned(void) const {
    return _isSigned;
}

void AForm::beSigned(Bureaucrat *bur) {
	std::cout << bur->getName() <<" is trying to sign "<<B_Y<< this->getName()<<RESET<< std::endl;
	if (bur->getGrade() > this->getGradeToSign()) {
		throw AForm::GradeTooLowException();
	}
	if (this->_isSigned)
		throw AForm::AlreadySigned();
	this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &os, AForm &bur) {
	std::cout << B_Y;
	os << "* ------------------------------------- *" << std::endl;
	os << "[ FORM " << bur.getName() << " ]" << std::endl;
	os << "Grade for executing : " << bur.getGradeToExec() << std::endl;
	os << "Grade to signed : " << bur.getGradeToSign() << std::endl;
	os << "Form is";
	if (bur.get_isSigned() == true)
		os <<B_G<< " is signed" << RESET << std::endl;
	else
		os <<B_R<< " not signed" <<RESET<< std::endl;
		os << "* ------------------------------------- *";
	std::cout << RESET << std::endl;
	return (os);
}


//EXEPCTIONS
const char *AForm::GradeTooLowException::what() const throw() {
  return (B_R"Grade is too low !");
}
const char *AForm::GradeTooHighException::what() const throw() {
  return (B_R"Grade is too high !");
}
const char *AForm::AlreadySigned::what() const throw() {
  return (B_R"Form is already signed");
}

const char *AForm::NotSigned::what() const throw() {
  return (B_R"Form is not signed");
}
