/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:55:54 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/10 10:55:57 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

AAnimal::AAnimal() {
	std::cout << "God created something" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "God killed something" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
}

AAnimal::AAnimal(const AAnimal& cpy)
{
	*this = cpy;
}

AAnimal &AAnimal::operator=(const AAnimal& src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

std::string AAnimal::getType() const
{
	if (type.empty())
		return ("Random AAnimal");
	return (this->type);
}

void AAnimal::makeSound() const
{
	std::cout << "* Random AAnimal noise *" << std::endl;
}
