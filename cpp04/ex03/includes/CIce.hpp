#ifndef CICE_HPP
#define CICE_HPP

#include "CCharacter.hpp"

class CIce: public AMateria {

	public:

	CIce( void );
	virtual ~CIce( void );
	CIce( const CIce& original );

	CIce& operator=( const CIce& original );

	std::string const & getType( void ) const;
	AMateria* clone( void ) const;
	void use( ICharacter& target );

};

#endif
