#include "Span.hpp"


void Span::addNumber(int number){
	if(vec.size() >= N){
		throw std::runtime_error("out of range");
	}
	vec.push_back(number);
	std::cout << number << " added to span" << std::endl;
}

int Span::shortestSpan(){
	if(vec.size() <= 1){
		throw std::runtime_error("not enough elements");
	}
	std::sort(vec.begin(), vec.end());
	int min = vec[1] - vec[0];
	for(unsigned int i = 1; i < vec.size(); i++){
		if(vec[i] - vec[i - 1] < min){
			min = vec[i] - vec[i - 1];
		}
	}
	return min;
}

int Span::longestSpan(){
	if(vec.size() <= 1){
		throw std::runtime_error("not enough elements");
	}
	std::sort(vec.begin(), vec.end());
	return vec[vec.size() - 1] - vec[0];
}
