/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:33:09 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/31 15:35:46 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal &operator=(const WrongAnimal &src);
		~WrongAnimal();
		std::string getType() const;

		void makeSound() const;

	protected:
		std::string type;
};

#endif
