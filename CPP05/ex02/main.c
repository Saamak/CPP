#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

int main() {
    try {
        // Create a Bureaucrat object
        Bureaucrat bob("Bob", 120);
        Bureaucrat jean("Jean", 1); // Assuming grade 1 is the highest grade
        // Create a ShrubberyCreationForm object with the target "ZIZI"
        ShrubberyCreationForm shrubberyForm("ZIZI");
        PresidentialPardonForm Pardon("Phillipe");
        RobotomyRequestForm robotomyForm("daniel");
        std::cout << shrubberyForm;
        std::cout << Pardon;
		std::cout << robotomyForm;

        // Sign the form
        shrubberyForm.beSigned(&bob);
        std::cout << shrubberyForm;

        // Execute the form
        bob.executeForm(shrubberyForm);
        Pardon.beSigned(&jean);
        std::cout << Pardon;
        jean.executeForm(Pardon);

        robotomyForm.beSigned(&jean);
        std::cout << robotomyForm;
        jean.executeForm(robotomyForm);

        std::cout << "Shrubbery creation executed successfully." << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
