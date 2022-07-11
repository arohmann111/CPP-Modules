#ifndef FORM_HPP
#define FORM_HPP

#include <ostream>
#include <exception>
#include <string.h>
#include "Bureaucrat.hpp"

class Form
{
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	public:
		Form();
		Form(std::string name, int sign, int exec);
		~Form();

		std::string	getName() const;
		int			getExec() const;
		int			getSign() const;
		bool		getIsSigned() const;
		void		beSigned(Bureaucrat &bu);
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_exGrade;
		const int			_siGrade;
};

std::ostream &operator<<(std::ostream &os, const Form &out);

#endif