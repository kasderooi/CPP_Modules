#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

	private:

	AMateria* _knowledge[4];

	public:

	MateriaSource( void );
	virtual ~MateriaSource( void );
	MateriaSource( const MateriaSource& original );

	MateriaSource& operator=( const MateriaSource& original );
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

};

#endif
