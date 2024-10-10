/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:06:53 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/10 09:45:01 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){std::cout <<B_G" A Zombie  has been Created" << RESET << std::endl;}
Zombie::~Zombie(void){std::cout <<B_R" A Zombie has been destroyed" << RESET << std::endl;}

std::string Zombie::getName(void){return this->_name;};
void Zombie::setName(std::string name){this->_name = name;};

void Zombie::announce(void)
{
	std::cout << B_G << this->_name << RESET <<" : BraiiiiiiinnnzzzZ..." <<std::endl;
}
