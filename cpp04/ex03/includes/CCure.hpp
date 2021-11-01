#ifndef CCURE_HPP
#define CCURE_HPP

#include "CCharacter.hpp"

class CCure: public AMateria {

	public:

	CCure( void );
	virtual ~CCure( void );
	CCure( const CCure& original );

	CCure& operator=( const CCure& original );

	std::string const & getType( void ) const;
	AMateria* clone( void ) const;
	void use( ICharacter& target );

};

#endif
