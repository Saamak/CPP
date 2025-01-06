#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::cout << "\033[3mBitcoinExchange constructor\033[0m" << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "\033[3mBitcoinExchange destructor\033[0m" << std::endl;
}
void BitcoinExchange::printMap() const {
	std::cout << B_G"\nInput Map:" <<RESET<< std::endl;
	for (const auto& pair : inputMap) {
		std::cout << pair.first << " || " << pair.second << std::endl;
	}
	std::cout << B_G"\nCSV Map:" <<RESET<< std::endl;
	for (const auto& pair : csvMap) {
		std::cout << pair.first << " || " << pair.second << std::endl;
	}
}

bool BitcoinExchange::readCsv(){
	std::ifstream file("data.csv");
	if (!file.is_open()) {
		std::cerr << "Error: Cannot open the file." << std::endl;
		return false;
	}
	std::string line;
	if (std::getline(file, line)) {
			// Première ligne lue et ignorée
	}
	while (std::getline(file, line)) {
		size_t delimiterPos = line.find(',');
		if (delimiterPos != std::string::npos) {
			std::string key = line.substr(0, delimiterPos); // Extract key (date)
			std::string value = line.substr(delimiterPos + 1); // Extract value (number)
			csvMap.insert(std::make_pair(key, value));
		}
	}
	file.close();
	// printMap();
	return true;
}

bool BitcoinExchange::readFile(std::ifstream& file){

	std::string line;
	regex_t regex;
	int reti;
	// Compile the regular expression
	reti = regcomp(&regex, "^[0-9]{4}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01]) \\| (1000|[0-9]{1,3}(\\.[0-9]+)?)$", REG_EXTENDED);
	if (reti) {
		std::cerr << "Could not compile regex" << std::endl;
		return false;
	}
	while (std::getline(file, line)) {
		reti = regexec(&regex, line.c_str(), 0, NULL, 0);
		if (!reti) {
			// std::cout << line << std::endl;
			size_t delimiterPos = line.find('|');
			if (delimiterPos != std::string::npos) {
				std::string key = line.substr(0, delimiterPos - 1); // Extract key (date)
				std::string value = line.substr(delimiterPos + 2); // Extract value (number)
				inputMap.insert(std::make_pair(key, value));
			}
		} else if (reti == REG_NOMATCH) {
			std::cerr << "Invalid format: " << line << std::endl;
			return false;
		} else {
			char msgbuf[100];
			regerror(reti, &regex, msgbuf, sizeof(msgbuf));
			std::cerr << "Regex match failed: " << msgbuf << std::endl;
			return false;
		}
	}
	// Free the compiled regular expression
	regfree(&regex);
	return true;
}

void BitcoinExchange::research(){
	for(const auto& pair : inputMap){
		auto it = csvMap.find(pair.first);

		if (it != csvMap.end()) {
			std::cout <<pair.first<<" => "<< it->second;
			std::cout <<" => "<<B_G<<std::stod(pair.second) * std::stod(it->second) <<RESET<< std::endl;
		} else {
			it = csvMap.lower_bound(pair.first);
			if (it == csvMap.begin()) {
				std::cout << pair.first << B_R << " : Date not found in csvMap and no previous date available" << RESET << std::endl;
				continue;
			}
			--it;
			std::cout <<pair.first<< " => " <<pair.second<<" => "<<B_G<< std::stod(pair.second) * std::stod(it->second) <<RESET<< std::endl;
		}
	}
}
