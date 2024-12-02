#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>


// faire ocnstructeur par copy
//• Construction by copy and assignment operator. In both cases, modifying either the
// original array or its copy after copying musn’t affect the other array.
template <typename T>
class Array{
	private :
		T *data;
		size_t len;
	public:
		Array(): data(nullptr){}
		Array(unsigned int n): data(new T[n]), len(n){
			for(unsigned int i = 0; i < n; i++)
				data[i] = T();
		}
		~Array() {
			delete[] data;
		}
		size_t size(){return len;};

		T& operator[](size_t index) {
			return data[index];
		}
};
#endif
