
#include <iostream>
#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat jaeskim("jaeskim", 10);

	try
	{
		jaeskim.increment();
		std::cout << jaeskim << std::endl;
		jaeskim.increment();
		std::cout << jaeskim << std::endl;
		ShrubberyCreationForm formA("test");
		ShrubberyCreationForm formB("test1");
		RobotomyRequestForm formC("tes");
		jaeskim.signForm(formA);
		jaeskim.decrement();
		jaeskim.signForm(formB);
		jaeskim.executeForm(formB);
		jaeskim.executeForm(formA);
		jaeskim.executeForm(formC);
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
