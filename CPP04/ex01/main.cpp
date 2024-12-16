/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:55:46 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/15 16:19:19 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main()
{

	int numAnimals = 10;
	Animal** animals = new Animal*[numAnimals];

	// Create Dogs
	for(int i = 0; i < numAnimals / 2; i++) {
		animals[i] = new Dog();
		std::cout << B_Y << i << " " << RESET;
		animals[i]->makeSound();
	}

	//Create Cats
	for(int i = numAnimals / 2; i < numAnimals; i++) {
		animals[i] = new Cat();
		std::cout << B_Y << i << " " << RESET;
		animals[i]->makeSound();
	}

	for(int i = 0; i < numAnimals; i++) {
		delete animals[i];
	}
	delete[] animals;

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;
	// delete i;
}
