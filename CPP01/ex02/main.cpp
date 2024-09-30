/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:07:32 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:07:33 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string hi = "HI THIS IS BRAIN";
	std::string* stringPTR = &hi;
	std::string& stringREF = hi;

	std::cout << "Memory address of the original string: " << &hi << std::endl;
	std::cout << "Memory address held by pointer: " << stringPTR << std::endl;
	std::cout << "Memory address held by reference: " << &stringREF << std::endl << std::endl;

	std::cout << "Original string: " << hi << std::endl;
	std::cout << "Pointer to string: " << *stringPTR << std::endl;
	std::cout << "Reference to string: " << stringREF << std::endl;
}

