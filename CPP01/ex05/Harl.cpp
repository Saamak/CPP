#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}


void Harl::debug(void){
	std::cout << "Debug" << std::endl;
}

void Harl::info(void){
	std::cout << "Info" << std::endl;
}

void Harl::warning(void){
	std::cout << "Warning" << std::endl;
}

void Harl::error(void){
	std::cout << "Error" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string OPTION[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*harlFunc[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	if (level.length() <= 0)
	{
		std::cout << "[HARL] " << "Say something !" << std::endl;
		return;
	}
	while(i < 4)
	{
		if (level == OPTION[i])
		{
			(this->*harlFunc[i])();
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "[HARL] "<< "Invalid option" << std::endl;
	return ;
}
