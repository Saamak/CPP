#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "colors.h"


class AForm;

class Bureaucrat{
	public :
	Bureaucrat();
	Bureaucrat(std::string const & name, int const & grade);
	Bureaucrat(const Bureaucrat& cpy);
	Bureaucrat& operator=(const Bureaucrat& src);
	~Bureaucrat();
	std::string getName() const;
	int		getGrade() const;
	void	downGrade(int value);
	void	upGrade(int value);
	void 	signForm(AForm &check);

	void executeForm(AForm const & form);

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};

	private :
	std::string const _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur);

#endif
