#include "../include/Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form *Intern::makeForm(std::string name, std::string target)
{
	if (name != "shrubbery creation" && name != "robotomy request" && name != "presidential pardon")
		throw NotAKnownFormException();
	
	const std::string compForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	Form *(*ret[])(const std::string target) =
		{ &ShrubberyCreationForm::create, &RobotomyRequestForm::create, &PresidentialPardonForm::create};

	for (int i = 0; i < 3; ++i)
	{
		if (name == compForms[i])
			return (ret[i])(target);
	}
	return (NULL);
}

const char *Intern::NotAKnownFormException::what() const throw()
{
	return ("Not a known Form!");
}