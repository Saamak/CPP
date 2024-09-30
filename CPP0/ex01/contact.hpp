/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:00:23 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:00:26 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
# define R   "\x1B[31m"
# define G   "\x1B[32m"
# define Y   "\x1B[33m"
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"

class Contact{

	public :
		Contact();
		~Contact();
		void	set_first_name(std::string);
		std::string get_first_name(void);
		void	set_last_name(std::string);
		std::string get_last_name(void);
		void	set_nick_name(std::string);
		std::string get_nick_name(void);
		void	set_darkest_secret(std::string);
		std::string get_darkest_secret(void);
		void	set_phone_number(std::string);
		std::string get_phone_number(void);
	private:
		std::string m_first_name;
		std::string m_last_name;
		std::string m_nick_name;
		std::string m_darkest_secret;
		std::string m_phone_number;
};

#endif
