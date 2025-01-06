#include "BitcoinExchange.hpp"


int main(int argc, char* argv[]) {
	BitcoinExchange exchange;
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <file_path>" << std::endl;
		return 1;
	}

	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		std::cerr << "Error: Cannot open the file." << std::endl;
		return 1;
	}
	if(!exchange.readFile(file)){
		file.close();
		return 1;
	}
	if(!exchange.readCsv()){
		file.close();
		return 1;
	}
	std::cout << B_G"\nFiles successfully readed and stored.\n"<< RESET << std::endl;
	exchange.research();
	file.close();
	return 0;
}
