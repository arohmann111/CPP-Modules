#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "Form.hpp"
#include <ostream>
#include <fstream>
#include <string.h>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string t);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &o);
		RobotomyRequestForm &operator=(RobotomyRequestForm &o);

		void		action() const;
		std::string	getTarget() const;
		Form		*create(std::string target);
	private:
		std::string	_target;
};

#endif