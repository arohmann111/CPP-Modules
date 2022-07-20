#include "Span.hpp"

int main()
{
	try
	{
		Span sp(7);

		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(5);
		sp.addNumber(100);
		sp.addNumber(2414);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}