#include "Harl.hpp"

Harl::Harl(){
	funcMap["debug"] = &Harl::debug;
	funcMap["info"] = &Harl::info;
	funcMap["warning"] = &Harl::warning;
	funcMap["error"] = &Harl::error;
}

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

void Harl::complain(std::string level){
	if (funcMap.find(level) != funcMap.end())
	{
		void(Harl::*func)() = funcMap[level];
		(this->*func)();
	}
	else
		 std::cout << "Invalid level\n";
}
