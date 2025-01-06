#include "RPN.hpp"
#include <stack>
#include <sstream>
#include <stdexcept>
#include <cstdlib> // for std::strtod

double evaluateRPN(const std::string& expression) {
	std::stack<double> stack;
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (stack.size() < 2) {
				throw std::runtime_error("Invalid expression");
			}
			double b = stack.top(); stack.pop();
			double a = stack.top(); stack.pop();
			if (token == "+") stack.push(a + b);
			else if (token == "-") stack.push(a - b);
			else if (token == "*") stack.push(a * b);
			else if (token == "/") {
				if (b == 0) throw std::runtime_error("Division by zero");
				stack.push(a / b);
			}
		} else {
			char* end;
			double num = std::strtod(token.c_str(), &end);
			if (*end != '\0') {
				throw std::runtime_error("Invalid token: " + token);
			}
			stack.push(num);
		}
	}

	if (stack.size() != 1) {
		throw std::runtime_error("Invalid expression");
	}

	return stack.top();
}
