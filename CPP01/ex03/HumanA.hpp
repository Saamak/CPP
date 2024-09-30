/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:08:03 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:08:06 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	public :
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack();
		std::string getName(void);
		void setName(std::string name);
	private :
		std::string _name;
		Weapon& _weapon;
};
#endif
