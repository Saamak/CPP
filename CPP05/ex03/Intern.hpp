#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern{
	public :
		Intern();
		~Intern();
		AForm *makeForm(std::string const &formName, std::string const &target);
		class NotAvailable : public std::exception {
			const char *what() const throw();
		};
};
#endif
