/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:44:24 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/29 15:32:23 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"){
	std::cout << "Basic constructor called" << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Parametized constructor called" << std::endl;
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
		this->_attack_damage = src.getAttackDamage();
		this->_name = src.getName();
		this->_energy_points = src.getEnergy();
		this->_hit_points = src.getLife();
	}
	return (*this);
}

std::string ClapTrap::getName() const {return(this->_name);}
int ClapTrap::getLife() const{return (this->_hit_points);}
int ClapTrap::getEnergy() const{return (this->_energy_points);}

int ClapTrap::getAttackDamage() const{
	return _attack_damage;
}

void	ClapTrap::setAttackDamage(int damage){
	_attack_damage = damage;
}


void ClapTrap::beRepaired(unsigned int amount){
	_hit_points += 1;
	std::cout << _name << "has been repaired by " << B_G << amount << RESET << std::endl;
	std::cout << "current hit_points : " << B_G <<_hit_points << RESET <<std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	std::cout << "ClapTrap " << B_G <<this->_name << RESET" attacks " << B_Y << target << RESET" causing " << B_Y<< this->_attack_damage << RESET" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hit_points < amount) {
		_hit_points = 0;
	} else {
		_hit_points -= amount;
	}
	std::cout << _name << " takes " << amount << " points of damage! Current hit points: " << _hit_points << std::endl;
}
