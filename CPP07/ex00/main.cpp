#include <iostream>
#include "whatever.hpp"

int main() {
	int a = 10, b = 20;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;

	double x = 1.1, y = 2.2;
	std::cout << "min(x, y) = " << min(x, y) << std::endl;
	std::cout << "max(x, y) = " << max(x, y) << std::endl;

	return 0;
}
