/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:00:28 by ppitzini          #+#    #+#             */
/*   Updated: 2024/09/30 18:00:30 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "contact.hpp"

void	print_data(std::string str)
{
	if(str.length() > 10)
	{
		str.resize(9);
		str.push_back('.');
	}
	std::cout << std::setw(10) << str << B_Y"|" << RESET;
}

int	space_finder(std::string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if(!isspace(str[i]))
			return(0);
	}
	return 1;
}

int	ft_isdigit(char test)
{

	if(isalpha(test) || isspace(test))
			return(0);
	return 1;
}

void	print_menu()
{
	printf(B_G"\n-------------------------|MENU|------------------- \n\nYou can use these commands :\n\n");
	printf(RESET"-> ADD    (to add a new contact)\n");
	printf("-> SEARCH (to search a contact)\n");
	printf("-> EXIT   (to exit the app)\n");
}

int	input(std::string cmd, PhoneBook &pb)
{
	std::string number;
	if(cmd == "ADD")
	{
		pb.add_contact();
		system("clear");
		std::cout << B_G"\n [Contact successfully added ✔ ]\n" << RESET << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		system("clear");
		return 0;
	}
	if(cmd == "SEARCH")
	{
		if (pb.nbr_contacts == 0)
		{
			std::cout << B_R"\n No contact in the Phonebook \n"<< RESET;
			return 0;
		}
		pb.print_contacts();
		do{
			std::cout << B_Y"\nType contact index : " << RESET;
			std::getline(std::cin, number);
			if (std::cin.eof()) {
				exit(1);
			}
			if (number.length() != 1 || !ft_isdigit(number[0]))
			{
				std::cout << B_Y"\nPlease enter a valid index \n"<< RESET;
			}
			else
			{
				int index = std::stoi(number);
				if (index < 0 || index >= pb.nbr_contacts)
					std::cout << B_Y"\nPlease enter a valid index (0 - " << pb.nbr_contacts-1 << ") \n"<< RESET;
				else
					break;
			}
		} while(true);
		pb.search(number);
		return 0;
	}
	if(cmd == "EXIT")
	{
		printf(B_Y"Phone Book OFF\n");
		system("clear");
		return (1);
	}
	else
	{
		std::cout << B_R"\n [Wrong Command \u2716] " << RESET << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		system("clear");
	}
	return 0;
}

int main(void)
{
	std::string cmd;
	PhoneBook pb;

	system("clear");
	while (1)
	{
		print_menu();
		std::cout << B_Y"\nType a cmd: " << RESET;
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			exit(1);
		}
		system("clear");
		if(input(cmd, pb))
		{
			printf(B_Y"Phone Book OFF\n");
			break ;
		}
	}
	return 0;
}
