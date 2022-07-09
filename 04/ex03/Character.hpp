#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "AMateria.hpp"

class Character : public ICharacter
{
	Character();
	Character(const std::string name);
	Character(const Character &other);
	~Character();

	Character &operator=(const Character &other);

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

	protected:
		AMateria *invent[4];
		std::string _name;
};

#endif