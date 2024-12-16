/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:33:40 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/31 15:35:22 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) { this->type = type; }

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) { *this = cpy; }

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
if (this != &src)
	this->type = src.getType();
return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "* Wrong Animal noise *" << std::endl;
}

std::string WrongAnimal::getType() const {
if (type.empty())
	return ("Wrong Animal");
return (this->type);
}
