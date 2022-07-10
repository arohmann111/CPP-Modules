#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::~Ice() {};

Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice &Ice::operator=(const Ice other)
{
	(void)other;
	return (*this);
}

AMateria *Ice::clone()
{
	return (new Ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "*shoots an ice bolt at " << target.getName() 
		<< " *" << std::endl;
	this->AMateria::use(target);
}

