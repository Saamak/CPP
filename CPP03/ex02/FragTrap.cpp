/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:17:29 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/30 15:54:25 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	if (name.empty())
		this->_name = "Unknown FragTrap";
	else
		this->_name = name;
	std::cout << "FragTrap " << name << " has spawned"<< std::endl;
	this->_hit_points = 100;
	this->_attack_damage = 30;
	this->_energy_points = 100;
}

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap(cpy)
{
	*this = cpy;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit_points = src._hit_points;
		this->_attack_damage = src._attack_damage;
		this->_energy_points = src._energy_points;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has dispawned" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points <= 0)
	{ std::cout << "FragTrap" << this->_name << " cannot do a high five !" << std::endl; return; }
	std::cout << B_G << "FragTrap " << _name << " want to do a high five ! " << RESET << std::endl;
}
