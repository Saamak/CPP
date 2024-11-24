#include "ScalarConverter.hpp"

std::string check_if_int(const std::string &input) {
	for (int i = 0; i < input.length(); i++) {
		if (!isdigit(input[i])) {
			return "unknown";
		}
	}
	return "int";
}

std::string check_if_char(const std::string &input)
{
	if(input.length() == 1 && isalpha(input[0]))
		return("char");
	return ("unknown");
}

std::string check_if_float(const std::string &input) {
	if (input.empty() || input.back() != 'f') {
		return "unknown";
	}
	int dot_count = 0;
	for (int i = 0; i < input.length() - 1; i++) {
		if (!isdigit(input[i]) && input[i] != '.') {
			return "unknown";
		}
		if (input[i] == '.') {
			dot_count++;
			if (dot_count > 1) {
				return "unknown";
			}
			if (i == 0 || i == input.length() - 2 || !isdigit(input[i - 1]) || !isdigit(input[i + 1])) {
				return "unknown";
			}
		}
	}
	return (dot_count == 1) ? "float" : "unknown";
}

std::string check_if_double(const std::string &input) {
	if (input.empty() || input.back() == 'f') {
		return "unknown";
	}
	int dot_count = 0;
	for (int i = 0; i < input.length(); i++) {
		if (!isdigit(input[i]) && input[i] != '.') {
			return "unknown";
		}
		if (input[i] == '.') {
			dot_count++;
			if (dot_count > 1) {
				return "unknown";
			}
			if (i == 0 || i == input.length() - 1 || !isdigit(input[i - 1]) || !isdigit(input[i + 1])) {
				return "unknown";
			}
		}
	}
	return (dot_count == 1) ? "double" : "unknown";
}

std::string what_type(std::string &input) {
	std::string result = check_if_char(input);
	if (result == "unknown") {
		result = check_if_int(input);
	}
	if (result == "unknown") {
		result = check_if_float(input);
	}
	if (result == "unknown") {
		result = check_if_double(input);
	}
	return result;
}

void	error()
{
	std::cerr <<B_R<< "Error" <<RESET<<std::endl;
	exit(1);
}

void ScalarConverter::convert(std::string& input){
	std::cout << B_G <<"Input : "<<RESET<<BOLD<< input <<RESET<< std::endl;
	std::string type;

	type = what_type(input);
	std::cout <<B_Y<<"Type  : "<<RESET<<BOLD<< type<<RESET;
	if(type == "unknown")
	{
		std::cerr<<std::endl<<"Error"<<std::endl;
		exit(1);
	}
	// convertit en double puis en others
}
