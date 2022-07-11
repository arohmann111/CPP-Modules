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
	this->~MateriaSource();
	for (int i = 0; i < 4; ++i)
	{
		AMateria const *tmp = other.getMateria(i);
		if (tmp != NULL)
			this->_memory[i] = tmp->clone();
		else
			this->_memory[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i ++)
	{
		if (this->_memory[i] == NULL)
		{
			this->_memory[i] = materia;
			return ;
		}
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

AMateria *MateriaSource::getMateria(int idx) const
{
	return (this->_memory[idx]);
}