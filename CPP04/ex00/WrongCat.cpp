/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:34:21 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/31 15:34:42 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy) { *this = cpy; }

WrongCat &WrongCat::operator=(const WrongCat &src) {
if (this != &src)
	this->type = src.getType();
return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "* WrongCat noise *" << std::endl;
}
