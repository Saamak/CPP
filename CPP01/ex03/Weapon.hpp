/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:08:44 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:08:45 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define RESET "\x1B[0m"


class Weapon{
	public :
		Weapon(std::string weapon);
		~Weapon();
		const std::string& getType() const;
		void	setType(std::string type);
	private :
		std::string _type;
};

#endif
