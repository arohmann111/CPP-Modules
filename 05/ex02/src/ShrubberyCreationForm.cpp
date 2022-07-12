#include "../include/ShrubberyCreationForm.hpp"

/*constructors and destructor*/
ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137), _target() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : Form("Shrubbery", 145, 137), _target(t) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &o) : Form(o), _target(o._target) { }

/*operator overload*/
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &o)
{
	this->_target = o._target;
	return *this;
}

/*member functions*/
std::string	ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream file(this->getTarget() + "_shrubbery");

	if (file.is_open() ==false)
		throw std::ofstream::failure("Could not open file " + this->getTarget() + "_shubbery");
		file << "hello";
}