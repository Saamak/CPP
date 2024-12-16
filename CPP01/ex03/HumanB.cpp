/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:08:13 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/19 19:29:28 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

std::string HumanB::getName(void){return _name;}
HumanB::HumanB(std::string name): _weapon(NULL) {setName(name);}
HumanB::~HumanB(){;}

void HumanB::setName(std::string name){_name = name;}

void HumanB::attack() {
	if(_weapon == NULL)
		std::cout << B_R"NO WEAPON MOTHERFUCKER" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon* weapon){
	_weapon = weapon;
}
