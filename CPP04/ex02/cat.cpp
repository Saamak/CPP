/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:56:13 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/10 10:56:15 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat()  : AAnimal("Cat") {
	std::cout << "God created a Cat" << std::endl;
}

Cat::~Cat() {
	std::cout << "God killed a Cat" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
	*this = cpy;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "* Miaw." << std::endl;
}
