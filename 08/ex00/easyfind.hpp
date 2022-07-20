#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &con, int i)
{
	typename T::iterator it = std::find(con.begin(), con.end(), i);
	if (it == con.end())
		throw std::out_of_range("Out of range!");
	return it;
}

#endif