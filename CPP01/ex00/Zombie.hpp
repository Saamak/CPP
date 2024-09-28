#include <iostream>

# define R   "\x1B[31m"
# define G   "\x1B[32m"
# define Y   "\x1B[33m"
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"

class Zombie{
	public :
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void randomChump(std::string name);
		std::string getName(void);
		void setName(std::string name);
	private :
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump (std::string name);
