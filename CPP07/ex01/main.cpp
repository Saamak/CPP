#include "iter.hpp"
#include <cstddef>
#include <iostream>

// Define macros for std::cout and std::endl
#define P std::cout
#define E std::endl

template <typename T, typename Func>
void iter(T* arr, size_t len, Func func) {
	for (size_t i = 0; i < len; ++i) {
		func(static_cast<void*>(&arr[i]));
	}
}

void printThis(void* B) {
	P << *static_cast<std::string*>(B) << E;
}

int main() {
	// char array[] = {'b', 'r', 'a'};
	// int array[] = {1, 2, 3};
	std::string array[] = {"salut", "moi c'est", "Danimel"};

	P << "Array address: " << static_cast<void*>(array) << E;
	size_t arrayLength = sizeof(array) / sizeof(array[0]);
	iter(array, arrayLength, printThis);
	return 0;

}
