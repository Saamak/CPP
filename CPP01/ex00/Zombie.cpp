/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:05:48 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:05:50 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){std::cout << this->_name << B_G" has been Created" << RESET << std::endl;}
Zombie::~Zombie(void){std::cout << this->_name << B_Y" has been destroyed" << RESET << std::endl;}

std::string Zombie::getName(void){return this->_name;};
void Zombie::setName(std::string name){this->_name = name;};



void Zombie::announce(void)
{
	std::cout << B_G << this->getName()<< RESET <<" : BraiiiiiiinnnzzzZ..." <<std::endl;
}
