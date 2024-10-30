/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:44:24 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/30 15:45:07 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"){
	std::cout << "[ClapTrap] default constructor called" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "[ClapTrap] Parametized constructor called" << std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	*this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		this->_attack_damage = src._attack_damage;
		this->_name = src._name;
		this->_energy_points = src._energy_points;
		this->_hit_points = src._hit_points;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot be brought back from the dead" << std::endl;
	else if ((int)amount < 0)
		std::cout << "Error: Amount cannot be less than 0." << std::endl;
	else if (this->_hit_points >= 10)
		std::cout << "ClapTrap " << this->_name << " is already at full life" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " has no energy left" << std::endl;
	else
	{
		this->_hit_points += amount;
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " gained " << amount << " ♥️ and lost 1 energy point" << std::endl;
	}
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
	{   std::cout << "ClapTrap " << this->_name << " has been defeated or is out of health." << std::endl; return; }
	if (this->_energy_points <= 0)
	{   std::cout << "ClapTrap " << this->_name << " has not enough energy to attack" << std::endl; return; }
	this->_energy_points--;
	if (target.empty())
		std::cout << "Claptrap " << this->_name << " attacks but there is no target, causing "<< this->_attack_damage << " points of damage !" << std::endl;
	else
		std::cout << "Claptrap " << this->_name << " attacks " << target << " causing "<< this->_attack_damage << " points of damage !" << std::endl;
	if (this->_attack_damage <= 0)
		std::cout << "It's not very effective..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
	{ std::cout << "Error: Amount cannot be less than 0." << std::endl; return; }
	else if (this->_hit_points <= 0)
	{ std::cout << "ClapTrap " << _name << " is already dead. STOP" << std::endl; return ; }
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " lost " B_R <<  amount <<  " ♥️ " RESET;
	if (this->_hit_points <= 0)
		std::cout <<  " and" B_R << " died (RIP)" RESET<< std::endl;
	else
		std::cout << std::endl;
}

