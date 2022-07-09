#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->invent[i] = NULL;
};

Character::Character(const std::string name)
{
	for (int i = 0; i < 4; i++)
		this->invent[i] = NULL;
	this->_name = name;
};

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character() {};

Character &Character::operator=(const Character &other)
{
	for (int i = 0; i < 4; i++)
		this->invent[i] = other.invent[i];
	return (*this);
}

void Character::equip(AMateria *m)
{
	if (invent[0] == NULL)
		invent[0] = m;
	else if (invent[1] == NULL)
		invent[1] = m;
	else if (invent[2] == NULL)
		invent[2] = m;
	else if (invent[3] == NULL)
		invent[3] = m;
	else
		std::cout << "No space left in inventory!" << std::endl;
};

	void Character::unequip(int idx)
	{
		if ( idx >= 0 && idx < 4 && invent[idx] != NULL)
			invent[idx] = NULL;
	};

	void Character::use(int idx, ICharacter &target)
	{
		if (idx >= 0 && idx < 4)
			invent[idx]->use(target);
	};


