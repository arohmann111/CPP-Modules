#include "../include/RobotomyRequestForm.hpp"

/*constructors and destructor*/
RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 145, 137), _target() {}

RobotomyRequestForm::RobotomyRequestForm(std::string t) : Form("Robotomy", 145, 137), _target(t) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o) : Form(o), _target(o._target) { }

/*operator overload*/
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &o)
{
	this->_target = o._target;
	return *this;
}

/*member functions*/
std::string	RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void	RobotomyRequestForm::action() const
{
	std::cout << "* drilling noise *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->getTarget() << " has been robotomized!" << std::endl;
	else
		std::cout << this->getTarget() << ": robotomy failed!" << std::endl;


}