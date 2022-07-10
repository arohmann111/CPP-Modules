#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 0; i++)
		this->_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->_memory[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
		delete this->_memory[i];
	for (int i = 0; i <4; i++)
	{
		if (other._memory[i] != NULL)
			this->learnMateria(other._memory[i]->clone());
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i ++)
	{
		if (this->_memory[i] == NULL)
			this->_memory[i] = materia;
	}
}


AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i ++)
	{
		if (this->_memory[i] != NULL && this->_memory[i]->getType() == type)
			return (this->_memory[i]->clone());
	}
	return NULL;
}
