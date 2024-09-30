/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:00:40 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:00:42 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <string>
#include <iostream>
#include "contact.hpp"
#include <iomanip>
#include <thread>
#include <chrono>

# define R   "\x1B[31m"
# define G   "\x1B[32m"
# define Y   "\x1B[33m"
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"
int	space_finder(std::string str);
void	print_data(std::string str);

class PhoneBook{

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void 	add_contact(void);
		void 	search(std::string);
		void	print_contacts(void);
		int nbr_contacts;
	private:
		Contact contacts[8];
};
#endif
