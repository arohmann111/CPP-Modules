#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include <float.h>

class Convert
{
	public:
		Convert();
		Convert(std::string s) : _s(s) {}
		Convert(const Convert &other);
		~Convert() {}

		Convert &operator=(const Convert &other);

		void	scalarStr();
		std::string getInputType(const std::string s);

		void	printChar(char c);
		void	printInt(int i);
		void	printFloat(float f);
		void	printDouble(double d);
	private:
		std::string		_s;
};

#endif