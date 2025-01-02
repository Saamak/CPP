#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span{
	private :
		std::vector<int> vec;
		unsigned int N;

	public :
		Span(unsigned int max_size) : N(max_size){}
		void addNumber(int number);
		int	shortestSpan();
		int	longestSpan();
};
#endif
