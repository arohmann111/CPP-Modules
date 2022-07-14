#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(const Convert &other)
{
	*this = other;
}

Convert &Convert::operator=(const Convert &other)
{
	this->_s = other._s;
	return *this;
}

void Convert::scalarStr()
{
	// char *str = this->_s.c_str();
	std::string type = this->getInputType(this->_s);
	if (type == "char")
		this->printChar(this->_s[0]);
	else if (type == "int")
		this->printInt(atoi(_s.c_str()));
	else if (type == "float")
		this->printFloat(static_cast<float>(atof(_s)));
	else if (type == "double")
		this->printDouble(_s);
	else if (type == "not-dis")
		std::cout << "";
}

std::string Convert::getInputType(std::string s)
{
	if (s == "-inff" || s == "+inff" || s == "nanf")
		return ("float");
	else if (s == "-inf" || s == "+inf" || s == "nan")
		return ("double");
	else if (s.length() > 3 && s[s.length() - 1] == 'f')
		return ("float");
	else if (s.length() > 2 && s.find(".") != std::string::npos)
		return ("double");
	else if (s.length() == 1)
	{
		char c = s[0];
		if (isdigit(c))
			return ("int");
		if (isprint(c))
			return ("char");
		else
			return ("not-dis");
	}
	else
		return ("int");
}

void	Convert::printChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void	Convert::printInt(int i)
{
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void Convert::printFloat(float f)
{
	if (f < 0 || f > 127 || f != f)
		std::cout << "char: impossible" << std::endl;
	else if (f < 32 || f > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if ( f > FLT_MAX || f != f)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void Convert::printDouble(double d)
{
	if (d < 0 || d > 127 || d != d)
		std::cout << "char: impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if (d > INT_MAX || d < INT_MIN || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
