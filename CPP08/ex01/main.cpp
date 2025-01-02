#include "Span.hpp"

int main(){
	try{
		Span s(5);
		s.addNumber(45);
		s.addNumber(12);
		s.addNumber(99);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan();
	}
	catch (const std::exception &e) {
	std::cerr << e.what() << std::endl;
	}
}
