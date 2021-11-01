#include "CCharacter.hpp"

AMateria::AMateria( void ){
	return ;
}

AMateria::AMateria( std::string const & type ) : _type( type ){
	return ;
}

AMateria::~AMateria( void ){
	return ;
}

AMateria::AMateria( const AMateria& original ) : _type( original.getType()){
	*this = original;
	return ;
}

AMateria& AMateria::operator=( const AMateria& original ) {
	(void) original;
	return *this;
}

std::string const& AMateria::getType( void ) const{
	return this->_type;
}

void AMateria::use( ICharacter& target ){
	if ( this->_type.compare( "ice" ) )
		std::cout << "*  shoots an ice bolt at " << target.getName() << " *" <<std::endl;
	if ( this->_type.compare( "cure" ) )
		std::cout << "*  heals " << target.getName() <<"'s wounds *" <<std::endl;
}
