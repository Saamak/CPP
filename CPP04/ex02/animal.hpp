/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:56:08 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/10 10:56:10 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define R   "\x1B[31m"
# define G   "\x1B[32m"
# define Y   "\x1B[33m"
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"

class AAnimal {
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal& cpy);
		AAnimal& operator=(const AAnimal& src);
		virtual ~AAnimal();
		std::string getType() const;
		virtual void makeSound() const = 0; // Pure virtual function
	protected:
		std::string type;
};

#endif
