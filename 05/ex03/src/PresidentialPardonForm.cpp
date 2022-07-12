#include "../include/PresidentialPardonForm.hpp"

/*constructors and destructor*/
PresidentialPardonForm::PresidentialPardonForm() : Form("Presi", 145, 137), _target() {}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : Form("Presi", 145, 137), _target(t) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &o) : Form(o), _target(o._target) { }

/*operator overload*/
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &o)
{
	this->_target = o._target;
	return *this;
}

/*member functions*/
std::string	PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

Form	*PresidentialPardonForm::create(std::string target)
{
	return (new PresidentialPardonForm(target));
}
