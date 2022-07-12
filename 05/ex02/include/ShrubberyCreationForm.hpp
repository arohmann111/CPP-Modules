#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <ostream>
#include <fstream>
#include <string.h>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string t);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &o);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &o);

		void	action() const;
		std::string	getTarget() const;
	private:
		std::string	_target;
};

#endif