#ifndef INTERN_HPP
#define INTERN_HPP

#include <ostream>
#include <exception>
#include "../include/Form.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

class Intern
{
	public:
		class NotAKnownFormException : public std::exception
		{
			const char *what() const throw();
		};

		Intern();
		Intern(const Intern &o);
		~Intern();

		Form *makeForm(std::string name, std::string target);
	private:
		Intern &operator=(const Intern &o);

};

#endif