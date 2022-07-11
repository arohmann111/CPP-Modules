#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::~Cure() {};

Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure &Cure::operator=(const Cure other)
{
	(void)other;
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() 
		<< "'s wounds *" << std::endl;
	this->AMateria::use(target);
}

