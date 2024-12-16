#include <iostream>
#include "Array.hpp"

int main() {
	try {
		Array<int> arr(5);
		for (size_t i = 0; i < arr.size(); i++) {
			arr[i] = i * 10;
		}

		Array<int> arrCopy = arr;
		arrCopy[0] = 100;

		std::cout << "Original array: ";
		for (size_t i = 0; i < arr.size(); i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Copied array: ";
		for (size_t i = 0; i < arrCopy.size(); i++) {
			std::cout << arrCopy[i] << " ";
		}
		std::cout << std::endl;

		// Test out of bounds
		std::cout << arr[10] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
