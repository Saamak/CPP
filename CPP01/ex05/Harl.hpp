#ifndef HARL_HPP
# define HARL_HPP


#include <iostream>
#include <map>

class Harl{

	public :
		Harl();
		~Harl();
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void complain(std::string level);
	private :
		std::map<std::string, void (Harl::*)()> funcMap;
};


#endif
