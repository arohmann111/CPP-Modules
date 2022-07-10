#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		virtual ~AMateria();

		AMateria	&operator=(const AMateria &other);

		std::string const	&getType() const;

		virtual AMateria *clone() = 0;
		virtual void		use(ICharacter &target);
	protected:
		std::string _type;
};

#endif