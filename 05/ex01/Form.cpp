#include "Form.hpp"

Form::Form(): _name(), _isSigned(false), _exGrade(), _siGrade()
{}

Form::Form(std::string name, int sign, int exec): _name(name), _exGrade(exec), _siGrade(sign) 
{
	this->_isSigned = false;
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

std::string	Form::getName() const
{
	return this->_name;
}

int	Form::getExec() const
{
	return this->_exGrade;
}

int	Form::getSign() const
{
	return this->_siGrade;
}

bool	Form::getIsSigned() const
{
	return this->_isSigned;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high! Range 150-1";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low! Range 150-1";
}

std::ostream &operator<<(std::ostream &os, const Form &out)
{
	os << "name: " << out.getName() << " sign: " << out.getSign() << " exec: "
		<< out.getExec() << " signed: " << (out.getIsSigned()? "YES":"NO");
	return os;
}

void	Form::beSigned(Bureaucrat &bu)
{
	if (bu.getGrade() > this->_siGrade)
		throw GradeTooLowException();
	this->_isSigned = true;
}
