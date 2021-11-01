#include "CCure.hpp"

CCure::CCure( void ) : AMateria("cure"){
	return ;
}

CCure::~CCure( void ){
	return ;
}

CCure::CCure( const CCure& original ) : AMateria( original.getType()) {
	*this = original;
	return ;
}

CCure& CCure::operator=( const CCure& original ) {
	(void) original;
	return *this;
}

std::string const & CCure::getType( void ) const{
	return this->_type;
}

AMateria* CCure::clone( void ) const{
	AMateria *clone = new CCure(*this);
	return clone;
}

void CCure::use( ICharacter& target ){
	std::cout << "*  heals " << target.getName() <<"'s wounds *" <<std::endl;
}
