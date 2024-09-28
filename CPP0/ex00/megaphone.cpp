#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		if (argc == 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << "\n";
		return 0;
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			char c = std::toupper(argv[i][j]);
			std::cout << c;
		}
	}
	std::cout << "\n";
	return 0;
}
