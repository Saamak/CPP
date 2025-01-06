#ifndef BTC_EXCHANGE_HPP
# define BTC_EXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <fcntl.h>
#include <unistd.h>
#include <regex.h>
#include <string>
#include "colors.h"

class BitcoinExchange {
	private:
		std::map<std::string, std::string> inputMap;
		std::map<std::string, std::string> csvMap;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		bool readFile(std::ifstream& file); // Read and validate the file input
		void printMap() const;
		bool readCsv();
		void research();
};

#endif
