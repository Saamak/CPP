/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:44:16 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/30 15:44:45 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap bernard("Bernard");
	ScavTrap michel("Michel");

	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.takeDamage(9);
	bernard.beRepaired(9);
	bernard.attack("Michel");

	return (0);
}
