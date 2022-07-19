#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class OutOfRangeException : std::exception
{
	public:
		const char *what() const throw()
		{
			return "Out of range";
		}
};

template<typename T>
typename T::iterator easyfind(T &con, int i)
{
	typename T::iterator it = std::find(con.begin(), con.end(), i);
	if (it == con.end())
		throw OutOfRangeException();
	return it;
}

#endif