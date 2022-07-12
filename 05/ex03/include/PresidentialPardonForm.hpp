#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "Form.hpp"
#include <ostream>
#include <fstream>
#include <string.h>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string t);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &o);
		PresidentialPardonForm &operator=(PresidentialPardonForm &o);

		void		action() const;
		std::string	getTarget() const;
		static Form		*create(std::string target);

	private:
		std::string	_target;
};

#endif