#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class ElementNotFoundException : public std::exception{
	public:
		const char* what() const noexcept override{
			return "Element not found";
		}
};

template <typename T>
void easyfind(T &t, int b){
	typename T::iterator it = std::find(t.begin(), t.end(), b);

	if (it != t.end()) {
		std::cout << "Element found: " << *it << std::endl;
	} else {
		std::cout << "Element not found" << std::endl;
	}
}
#endif
