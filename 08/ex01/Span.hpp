#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int i);
		Span(const Span &other);
		~Span();

		Span &operator=(const Span &other);
		
		void			addNumber(int i);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

	private:
		unsigned int		_N;
		std::vector<int>	_con;
};

#endif