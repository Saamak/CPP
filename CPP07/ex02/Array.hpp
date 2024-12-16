#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
	private:
		T *data;
		size_t len;

	public:
		// Default constructor
		Array() : data(nullptr), len(0) {}

		// Constructor with size
		Array(unsigned int n) : data(new T[n]), len(n) {
			for (unsigned int i = 0; i < n; i++)
				data[i] = T();
		}

		// Copy constructor
		Array(const Array& other) : data(new T[other.len]), len(other.len) {
			for (size_t i = 0; i < len; i++)
				data[i] = other.data[i];
		}

		// Assignment operator
		Array& operator=(const Array& other) {
			if (this != &other) {
				delete[] data;
				len = other.len;
				data = new T[len];
				for (size_t i = 0; i < len; i++)
					data[i] = other.data[i];
			}
			return *this;
		}

		// Destructor
		~Array() {
			delete[] data;
		}

		// Size function
		size_t size() const {
			return len;
		}

		// Subscript operator with bounds checking
		T& operator[](size_t index) {
			if (index >= len) {
				throw std::out_of_range("Index out of bounds");
			}
			return data[index];
		}

		const T& operator[](size_t index) const {
			if (index >= len) {
				throw std::out_of_range("Index out of bounds");
			}
			return data[index];
		}
};

#endif
