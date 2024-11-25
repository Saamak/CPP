#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

# define R   "\x1B[31m"
# define G   "\x1B[32m"
# define Y   "\x1B[33m"
# define B_R   "\x1B[1;31m"
# define B_G   "\x1B[1;32m"
# define B_Y   "\x1B[1;33m"
# define BOLD "\x1B[1m"
# define RESET "\x1B[0m"

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
		void	signForm();

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
