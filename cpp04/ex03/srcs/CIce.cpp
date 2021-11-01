#include "CIce.hpp"

CIce::CIce( void ) : AMateria("ice"){
	return ;
}

CIce::~CIce( void ){
	return ;
}

CIce::CIce( const CIce& original ) : AMateria( original.getType()){
	*this = original;
	return ;
}

CIce& CIce::operator=( const CIce& original ) {
	(void) original;
	return *this;
}

std::string const & CIce::getType( void ) const{
	return this->_type;
}

AMateria* CIce::clone( void ) const{
	AMateria *clone = new CIce(*this);
	return clone;
}

void CIce::use( ICharacter& target ){
	std::cout << "*  shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}
