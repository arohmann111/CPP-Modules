#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	(void)other;
	return *this;
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}