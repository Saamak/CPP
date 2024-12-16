/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:55:26 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/10 10:56:36 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << "God created a Dog" << std::endl;
}

Dog::~Dog(){
	std::cout << "God killed a Dog" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
	*this = cpy;
}

Dog& Dog::operator=(const Dog& src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}


void Dog::makeSound() const
{
    std::cout << "* WOAF" << std::endl;
}
