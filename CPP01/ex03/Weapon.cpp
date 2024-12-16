/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:08:37 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/19 19:28:34 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	Weapon::Weapon(std::string weapon)
	{
		_type = weapon;
	}

	Weapon::~Weapon(){}


	const std::string& Weapon::getType() const{
		return _type;
	}

	void	Weapon::setType(std::string type){
		_type = type;
	}
