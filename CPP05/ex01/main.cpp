#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat* B = nullptr;

	try {
		B = new Bureaucrat("bob", 100);
		std::cout << *B << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try{
		Form F(10, 10, "Police Documents");
		if (B != nullptr) {
		std::cout << F;
		B->signForm(F);
		}
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	delete B;
	return 0;
}
