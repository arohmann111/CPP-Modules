#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat tim("Kevin", 15);
		while (tim.getGrade() > 0)
		{
			tim.increment();
			std::cout << tim << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
