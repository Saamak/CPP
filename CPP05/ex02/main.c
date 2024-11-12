#include "AForm.hpp"

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    try {
        // Create a Bureaucrat object
        Bureaucrat bob("Bob", 120); // Assuming grade 1 is the highest grade

        // Create a ShrubberyCreationForm object with the target "ZIZI"
        ShrubberyCreationForm shrubberyForm("ZIZI");
		std::cout << shrubberyForm;

        // Sign the form
        // shrubberyForm.beSigned(bob);

        // Execute the form
		// shrubberyForm.beSigned(bob);
        shrubberyForm.execute(bob);

        std::cout << "Shrubbery creation executed successfully." << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
