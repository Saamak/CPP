/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:00:18 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:00:19 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) {
}
Contact::~Contact(void) {
}

void	Contact::set_first_name(std::string cmd){m_first_name = cmd;}
void	Contact::set_last_name(std::string cmd){m_last_name = cmd;}
void	Contact::set_nick_name(std::string cmd){m_nick_name = cmd;}
void	Contact::set_darkest_secret(std::string cmd){m_darkest_secret = cmd;}
void	Contact::set_phone_number(std::string cmd){ m_phone_number = cmd;}

std::string Contact::get_first_name(void){return m_first_name;}
std::string Contact::get_last_name(void){return m_last_name;}
std::string Contact::get_nick_name(void){return m_nick_name;}
std::string Contact::get_darkest_secret(void){return m_darkest_secret;}
std::string Contact::get_phone_number(void){return m_phone_number;}


