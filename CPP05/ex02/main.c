#include "AForm.hpp"

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	ShrubberyCreationForm shrubberyForm("shrubberyForm");
	// Bureaucrat* B = nullptr;

	// try {
	// 	B = new Bureaucrat("bob", 12);
	// 	std::cout << *B << std::endl;
	// }
	// catch (const Bureaucrat::GradeTooHighException& e) {
	// 	std::cerr << "Exception caught: " << e.what() << std::endl;
	// }
	// catch (const Bureaucrat::GradeTooLowException& e) {
	// 	std::cerr << "Exception caught: " << e.what() << std::endl;
	// }
	// try{
	// 	ShrubberyCreationForm S(10, 10, "Police Documents");
	// }
	// catch (const ShrubberyCreationForm::BadGradeExeption& e){
	// 	std::cerr << "Exeption caught : " << e.what() << std::endl;
	// }

	// 		F.beSigned(*B);
	// 	}
	// }
	// catch (const Form::CantSignExeption& e) {
	// 	std::cerr << "Exception caught: " << B->getName()<< e.what() << std::endl;
	// }

	return 0;
}
