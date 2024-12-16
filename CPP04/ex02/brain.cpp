/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:56:27 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/10 11:15:19 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(){
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	*this = cpy;
}

Brain &Brain::operator=(const Brain& src)
{
	if (this != &src) {
		for(int i = 0; i < 100; i++) {
			this->ideas[i] = src.ideas[i];
		}
	}
	return (*this);
}
