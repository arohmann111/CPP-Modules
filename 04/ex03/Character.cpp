#include "Character.hpp"

Character::Character(const std::string name)
{
	for (int i = 0; i < 4; i++)
		this->_invent[i] = NULL;
	this->_name = name;
};

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_invent[i] != NULL)
			delete this->_invent[i];
	}
};

Character &Character::operator=(const Character &other)
{
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_invent[i] != NULL)
			delete this->_invent[i];
	}
	for (int i = 0; i < 4; i++)
		this->_invent[i] = other._invent[i];
	this->_name = other._name;
	return (*this);
}

void Character::equip(AMateria *m)
{
	if (_invent[0] == NULL)
		_invent[0] = m;
	else if (_invent[1] == NULL)
		_invent[1] = m;
	else if (_invent[2] == NULL)
		_invent[2] = m;
	else if (_invent[3] == NULL)
		_invent[3] = m;
	else
		std::cout << "No space left in inventory!" << std::endl;
};

void Character::unequip(int idx)
{
	if ( idx >= 0 && idx < 4 && _invent[idx] != NULL)
		_invent[idx] = NULL;
};
void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _invent[idx] != NULL)
		_invent[idx]->use(target);
};

std::string const &Character::getName() const
{
	return this->_name;
}
