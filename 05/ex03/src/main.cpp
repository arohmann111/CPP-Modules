
#include <iostream>
#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main()
{
	Bureaucrat jay("jay", 10);
	Intern a;

	try
	{
		jay.increment();
		std::cout << jay << std::endl;
		jay.increment();
		a.makeForm("robotomy request", "jay");
		std::cout << jay << std::endl;
		ShrubberyCreationForm formA("test");
		ShrubberyCreationForm formB("test1");
		RobotomyRequestForm formC("tes");
		jay.signForm(formC);
		jay.signForm(formA);
		jay.decrement();
		jay.signForm(formB);
		jay.executeForm(formB);
		jay.executeForm(formA);
		jay.executeForm(formC);
		std::cout << formA << std::endl;
		std::cout << formB << std::endl;
		std::cout << formC << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
