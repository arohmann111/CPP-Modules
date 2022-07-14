#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: one argument needed!" << std::endl;
		return (1);
	}
	Convert test(av[1]);

	test.scalarStr();
}