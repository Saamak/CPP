/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:44:16 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/05 15:57:53 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ClapTrap alice("Alice");

	bob.setAttackDamage(3);
	bob.attack("Alice");
	alice.takeDamage(bob.getAttackDamage());
	alice.setAttackDamage(2);
	alice.attack("Bob");
	bob.takeDamage(alice.getAttackDamage());
}
