#ifndef FORM_HPP
#define FORM_HPP

# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const _name;
		bool isSigned;
		const int gToSign;
		const int gToExec;

	public:
		Form();
		Form(const int gradeToSign, const int gradeToExec, const std::string name);
		Form(std::string const _name);
		Form(const Form& cpy);
		Form& operator=(const Form& src);
		~Form();
		void beSigned(Bureaucrat &b);
		const int getGradeToSign(void) const;
		const int getGradeToExec(void) const;
		const std::string getName() const;
		bool getIsSigned(void) const;
};

std::ostream &operator<<(std::ostream &os, Form &For);
#endif
