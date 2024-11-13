#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
	private:

		std::string const _name;
		bool _isSigned;
		const int _gToSign;
		const int _gToExec;

	public:

		AForm();
		AForm(const int gradeToSign, const int gradeToExec, const std::string name);
		AForm(const AForm &cpy);
		AForm &operator=(const AForm &src);
		virtual ~AForm();

		class GradeTooHighException : public std::exception {
		const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
		const char *what() const throw();
		};
		class AlreadySigned : public std::exception {
		const char *what() const throw();
		};
		class NotSigned : public std::exception {
		const char *what() const throw();
		};
		void beSigned(Bureaucrat *bur);
		virtual void execute(Bureaucrat const &executor) const = 0;

		// GETTERS / SETTERS
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool get_isSigned() const;
		std::string getName() const;
	};

std::ostream &operator<<(std::ostream &os, AForm &bur);

#endif
