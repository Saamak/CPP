#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "colors.h"
#include <iomanip>
#include <cctype>

class ScalarConverter{
	public :
		static void convert(std::string& input);
	private:
		ScalarConverter();
		~ScalarConverter();
};

#endif
