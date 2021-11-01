#ifndef CCHARACTER_HPP
#define CCHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class CCharacter: public ICharacter {

	private:

	const std::string _name;
	AMateria* inventory[4];
	CCharacter( void );

	public:

	CCharacter( std::string name );
	virtual ~CCharacter( void );
	CCharacter( const CCharacter& original );
	std::string const & getName( void ) const;
	void equip( AMateria* m );
	void unequip( int idx );
	void use( int idx, ICharacter& target );

	CCharacter& operator=( const CCharacter& original );

};

#endif
