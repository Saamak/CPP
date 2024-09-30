/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:08:20 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:08:21 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public :
		HumanB(std::string name);
		~HumanB();
		void attack();
		std::string getName(void);
		void setName(std::string name);
		void setWeapon(Weapon* weapon);
	private :
		std::string _name;
		Weapon* _weapon;
};
#endif




