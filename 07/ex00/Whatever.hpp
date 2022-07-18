#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T>
void	swap(T &a, T &b)
{
	T swap = a;
	a = b;
	b = swap;
}

template< typename T>
const T	&max( const T &x, const T &y)
{
	return (x >= y ? x : y);
}

template< typename T>
const T	&min( const T &x, const T &y)
{
	return (x <= y ? x : y);
}

#endif