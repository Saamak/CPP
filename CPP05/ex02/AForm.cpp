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
	std::cout << B_G <<"Parameterized AForm Constructor" << std::endl;
	std::cout << _gToSign << " | " << _gToExec << " : " << B_Y << _name << std::endl << std::endl;
}

AForm::AForm() : _name(""), _isSigned(false), _gToSign(0), _gToExec(0) {
	std::cout << B_G << "Default AForm Constructor" << std::endl;
}

AForm::AForm(const AForm& cpy)
	: _name(cpy._name), _isSigned(cpy._isSigned), _gToSign(cpy._gToSign), _gToExec(cpy._gToExec) {
	std::cout << "Copy Constructor called" << std::endl;
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
	std::cout << B_R << "AForm Destructor" << std::endl;
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

std::ostream &operator<<(std::ostream &os, AForm &For) {
  os << For.getGradeToSign() << " | " << For.getGradeToExec() << " : " << B_Y << For.getName() << std::endl;
  return (os);
}
