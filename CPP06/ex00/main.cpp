#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "need 2 arguments" <<std::endl;
		return 1;
	}
	std::string input = av[1];
	ScalarConverter::convert(input);
}
