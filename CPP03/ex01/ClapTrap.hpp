/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:44:46 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/31 15:13:20 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
# define R   "\x1B[31m"
# define G   "\x1B[32m"
# define Y   "\x1B[33m"
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"

class ClapTrap{
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& cpy);
		ClapTrap& operator=(const ClapTrap& src);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		protected :
			std::string _name;
			int _hit_points;
			int _energy_points;
			int _attack_damage;
		};
#endif

clap a;

clap b;

a =
