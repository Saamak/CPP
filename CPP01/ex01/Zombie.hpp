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
		Zombie(void); // default constructor
		// Zombie(std::string name); // parametized construtor
		~Zombie(void);
		std::string getName(void);
		void setName(std::string name);
	private :
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);
void	announce(std::string name);
