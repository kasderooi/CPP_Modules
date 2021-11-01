#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;
class CIce;
class CCure;

class AMateria {

	protected:

	const std::string _type;
	AMateria( void );

	public:

	AMateria( std::string const & type );
	virtual ~AMateria( void );
	AMateria( const AMateria& original );

	AMateria& operator=( const AMateria& original );

	std::string const & getType( void ) const;
	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter& target );

};

#endif
