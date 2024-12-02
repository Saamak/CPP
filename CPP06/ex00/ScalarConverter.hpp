#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include "colors.h"
#include <cstdint>
#include <iomanip>

class ScalarConverter{
	public :
		static void convert(std::string& input);
	private:
		ScalarConverter(); // privee pour empecher l'initialisation
};

#endif
