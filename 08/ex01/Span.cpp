#include "Span.hpp"

Span::Span()
{
	this->_N = 0;
}

Span::Span(unsigned int i)
{
	this->_N = i;
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span() {}

Span &Span::operator=(const Span &other)
{
	this->_con.clear();
	this->_con = other._con;
	this->_N = other._N;
	return *this;
}

void	Span::addNumber(int i)
{
	if (this->_con.size() > this->_N)
		throw std::out_of_range("Not enough space in vector!");
	this->_con.push_back(i);
}

unsigned int	Span::shortestSpan()
{
	if (this->_con.size() <= 0)
		throw std::length_error("Size is 0");
	
	unsigned int shorty = 100000000;
	unsigned int diff;
	std::sort(this->_con.begin(), this->_con.end());
	for (int i = 0; i < (int)this->_con.size() - 1; i++)
	{
		diff = this->_con[i + 1] - this->_con[i];
		if (diff < shorty)
			shorty = diff;
	}
	return shorty;
}

unsigned int	Span::longestSpan()
{
	if (this->_con.size() <= 0)
		throw std::length_error("Size is 0");
	int max = *std::max_element(this->_con.begin(), this->_con.end());
	int mini = *std::min_element(this->_con.begin(), this->_con.end());
	return (std::abs(max - mini));
}
