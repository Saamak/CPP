/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:55:54 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/15 16:18:45 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() {
	std::cout << "God created something" << std::endl;
}

Animal::~Animal() {
	std::cout << "God killed something" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
}

Animal::Animal(const Animal& cpy)
{
	*this = cpy;
}

Animal &Animal::operator=(const Animal& src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

std::string Animal::getType() const
{
	if (type.empty())
		return ("Random Animal");
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "* Random Animal noise *" << std::endl;
}
