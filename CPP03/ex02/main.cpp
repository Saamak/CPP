/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:44:16 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/31 15:17:01 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap bernard("Bernard");
	ScavTrap michel("Michel");
	FragTrap louis("Louis");

	bernard.takeDamage(9);
	bernard.beRepaired(2);
	bernard.beRepaired(2);
	bernard.attack("TOTO");
	bernard.beRepaired(2);
	bernard.beRepaired(0);
	bernard.takeDamage(2);
	bernard.beRepaired(2);
	bernard.beRepaired(1);
	bernard.takeDamage(10);
	bernard.takeDamage(100);

	michel.attack("enemi");
	michel.guardGate();
	michel.takeDamage(100);
	michel.guardGate();

	michel.beRepaired(2);
	louis.highFivesGuys();
	bernard.takeDamage(10);

	return (0);
}
