#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	public:
		Bureaucrat();
		Bureaucrat(std::string);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &other);

		std::string		getName() const;
		int				getGrade() const;
		void			increment();
		void			decrement();
	private:
		const std::string _name;
		int	_grade;
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &out);

#endif