#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void easyfind(T &t, int b){
	t.push_back(5);

	typename T::iterator it = std::find(t.begin(), t.end(), b);

    if (it != t.end()) {
        std::cout << "Element found: " << *it << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
}
#endif
