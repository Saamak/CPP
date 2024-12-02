#include "ScalarConverter.hpp"

bool isDisplayable(char c) {
	return std::isprint(static_cast<unsigned char>(c));
}

void	print_special(std::string input)
{
	std::cout << "char: impossible\nint: impossible \n";
	std::cout << "float: " + input <<std::endl;
	std::cout << "double: " +input << std::endl;
}

bool CheckErrors(std::string value)
{
	std::string handle_array[6] = {"-inff", "+inff", "-inf", "nan", "inf", "nanf"};
	for (int i = 0; i < 6; i++)
		if (handle_array[i] == value)
			return true;
	return false;
}

std::string check_if_int(const std::string &input) {
	int start = (input[0] == '-') ? 1 : 0;
	for (int i = start; i < input.length(); i++) {
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
	int start = (input[0] == '-') ? 1 : 0;
	int dot_count = 0;
	for (int i = start; i < input.length() - 1; i++) {
		if (!isdigit(input[i]) && input[i] != '.') {
			return "unknown";
		}
		if (input[i] == '.') {
			dot_count++;
			if (dot_count > 1) {
				return "unknown";
			}
			if (i == start || i == input.length() - 2 || !isdigit(input[i - 1]) || !isdigit(input[i + 1])) {
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
	int start = (input[0] == '-') ? 1 : 0;
	int dot_count = 0;
	for (int i = start; i < input.length(); i++) {
		if (!isdigit(input[i]) && input[i] != '.') {
			return "unknown";
		}
		if (input[i] == '.') {
			dot_count++;
			if (dot_count > 1) {
				return "unknown";
			}
			if (i == start || i == input.length() - 1 || !isdigit(input[i - 1]) || !isdigit(input[i + 1])) {
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
//GERER NANF ETC
void ScalarConverter::convert(std::string& input){
	bool special = CheckErrors(input);
	if(special){
		print_special(input);
		return ;
	}
	std::cout << B_G <<"Input : "<<RESET<<BOLD<< input <<RESET<< std::endl;
	std::string type;

	type = what_type(input);
	if (type == "unknown") {
		std::cerr << std::endl << "Error" << std::endl;
		exit(1);
	}

	double res = 0.0;
	if (type != "char") {
		char* end;
		errno = 0;

		if (type == "float" && input.back() == 'f') {
			input.pop_back(); // Remove the 'f' character
		}

		res = strtod(input.c_str(), &end);

		if (errno != 0 || *end != '\0') {
			std::cerr << std::endl << "Error: Invalid conversion" << std::endl;
			exit(1);
		}
	}

	std::cout << std::endl;

	if (type == "char") {
		char c = input[0];
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		if (isDisplayable(c)) {
			std::cout << "char: " << c << std::endl;
		} else {
			std::cout << "char: can't see this" << std::endl;
		}
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
	} else if (type == "int") {
		int i = static_cast<int>(res);
		std::cout << "int: " << i << std::endl;
		if (isDisplayable(static_cast<char>(i))) {
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		} else {
			std::cout << "char: can't see this" << std::endl;
		}
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	} else if (type == "float") {
		float f = static_cast<float>(res);
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		if (isDisplayable(static_cast<char>(f))) {
			std::cout << "char: " << static_cast<char>(f) << std::endl;
		} else {
			std::cout << "char: can't see this" << std::endl;
		}
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	} else if (type == "double") {
		std::cout << "int: " << static_cast<int>(res) << std::endl;
		if (isDisplayable(static_cast<char>(res))) {
			std::cout << "char: " << static_cast<char>(res) << std::endl;
		} else {
			std::cout << "char: can't see this" << std::endl;
		}
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(res) << "f" << std::endl;
		std::cout << "double: " << res << std::endl;
    }
}
