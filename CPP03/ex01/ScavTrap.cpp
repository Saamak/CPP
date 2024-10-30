/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:15:51 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/30 15:07:40 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "[ScavTrap] default constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name) {
	std::cout << "[ScavTrap] parametrized constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_hit_points <= 0)
	{   std::cout << "[ GATE-KEEPER MODE of " <<  this->_name<< " ] : cannot be activated" << std::endl; return; }
	std::cout << "[ GATE-KEEPER MODE of " << this->_name<< " ] : activated" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
	{   std::cout << "ScavTrap" << this->_name<< " has been defeated or is out of health." << std::endl; return; }
	if (this->_energy_points <= 0)
		std::cout << "ScavTrap " << this->_name<< " has not enough energy to attack" << std::endl;
	else
	{
		this->_energy_points--;
		if (target.empty())
			std::cout << "Scavtrap " << this->_name<< " attacks but there is no target, causing "<< this->_attack_damage << " points of damage !" << std::endl;
		else
			std::cout << "ScavTrap " << this->_name<< " attacks " << target << " causing "<< this->_attack_damage << " points of damage !" << std::endl;
		if (this->_attack_damage <= 0)
			std::cout << "It's not very effective..." << std::endl;
	}
}
