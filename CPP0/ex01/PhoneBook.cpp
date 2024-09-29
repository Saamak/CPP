#include "PhoneBook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook(void) {
	nbr_contacts = 0;
}
PhoneBook::~PhoneBook(void) {
}

void PhoneBook::add_contact(void)
{
	static int i = 0;
	if (i >= 8)
		i = 0;
	std::string cmd;
	std::cout << B_G"ADD CONTACT" << RESET <<std::endl;
	do {
		std::cout << "First name : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			exit(1);
		}
	} while (cmd.empty() || space_finder(cmd));
	contacts[i].set_first_name(cmd);
	do {
		std::cout << "Last name : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			exit(1);
	}
	} while (cmd.empty() || space_finder(cmd));
	contacts[i].set_last_name(cmd);
	do {
		std::cout << "Nick name : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			exit(1);
		}
	} while (cmd.empty() || space_finder(cmd));
	contacts[i].set_nick_name(cmd);
		do {
		std::cout << "Darkest secret : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			exit(1);
		}
	} while (cmd.empty() || space_finder(cmd));
	contacts[i].set_darkest_secret(cmd);
	do {
		std::cout << "Phone Number : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			exit(1);
		}
	} while (cmd.empty() || space_finder(cmd));
	contacts[i].set_phone_number(cmd);
	i++;
	if (nbr_contacts < 8)
		nbr_contacts++;
	return ;
}

void PhoneBook::print_contacts(void)
{
	int j = 0;

	std::cout << B_G"Contacts : " << RESET << std::endl;
	std::cout << B_Y"_____________________________________________" << RESET << std::endl;
	std::cout << B_Y << std::setw(10) << "Index" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	while(j < nbr_contacts)
	{
		std::cout << B_G << std::setw(10) << j << RESET << B_Y"|" << RESET;
		print_data(contacts[j].get_first_name());
		print_data(contacts[j].get_last_name());
		print_data(contacts[j].get_nick_name());
		std::cout << std::endl;
		std::cout << B_Y"_____________________________________________" << std::endl << RESET <<std::endl;
		j++;
	}
}
void	PhoneBook::search(std::string cmd)
{
	int j = std::stoi(cmd);
	system("clear");
	std::cout << B_G"SEARCH SECTION" << RESET << B_Y" (contact "<< j << ")\n\n" << RESET;
	std::cout << B_Y"First Name : " << RESET;
	std::cout << contacts[j].get_first_name() << std::endl;
	std::cout << B_Y"Last Name : " << RESET;
	std::cout << contacts[j].get_last_name() << std::endl;
	std::cout << B_Y"NickName : " << RESET;
	std::cout << contacts[j].get_nick_name() << std::endl;
	std::cout << B_Y"Darkest Secret : " << RESET;
	std::cout << contacts[j].get_darkest_secret() << std::endl;
	std::cout << B_Y"Phone number : " << RESET;
	std::cout << contacts[j].get_phone_number()<< std::endl;
}
