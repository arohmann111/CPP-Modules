#include "../include/Bureaucrat.hpp"

/*constructors & destructor*/
Bureaucrat::Bureaucrat()
{
	this->_grade = 50;
}

Bureaucrat::Bureaucrat(std::string name): _name(name)
{
	this->_grade = 50;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();

	return *this;
}

/*member functions*/
std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::increment()
{
	this->_grade -= 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrement()
{
	this->_grade += 1;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &f)
{
	f.beSigned(*this);
	if (this->getGrade() < f.getSign())
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << f.getName() << " because his grade is not good enough!" << std::endl;
}

void	Bureaucrat::executeForm(const Form &form)
{
	form.execute(*this);
	if (this->getGrade() < form.getExec())
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't execute " << form.getName() << std::endl;
}

/*exceptions*/
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high! Range: 150-1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low! Range: 150-1");
}

/*ostream operator overload*/
std::ostream &operator<<(std::ostream &os, const Bureaucrat &out)
{
	os << out.getName() << " has a grade of " << out.getGrade() << ".";
	return (os);
}
