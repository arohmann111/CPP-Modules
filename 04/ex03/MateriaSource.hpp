#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &other);

		AMateria	*createMateria(std::string const &type);
		void		learnMateria(AMateria *materia);
		AMateria	*getMateria(int index) const;

	protected:
		AMateria *_memory[4];
};

#endif