/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:07:57 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:07:59 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

std::string HumanA::getName(void){return _name;}

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon){}

HumanA::~HumanA(){;}

void HumanA::setName(std::string name){_name = name;}

void HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
