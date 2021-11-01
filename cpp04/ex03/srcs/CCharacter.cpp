#include "CCharacter.hpp"

CCharacter::CCharacter( void ){
	return ;
}

CCharacter::CCharacter( std::string name ) : _name( name ){
	for(int i = 0; i < 4; i++){
		inventory[i] = NULL;
	}
	return ;
}

CCharacter::~CCharacter( void ){
	for(int i = 0; i < 4; i++){
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	return ;
}

CCharacter::CCharacter( const CCharacter& original ) : _name( original._name ){
	for(int i = 0; i < 4; i++){
		inventory[i] = NULL;
	}
	*this = original;
	return ;
}

CCharacter& CCharacter::operator=( const CCharacter& original ) {
	if (this != &original){
		for (int i = 0; i < 4; i++){
			if (original.inventory[i] != NULL){
				this->inventory[i] = original.inventory[i]->clone();
			}
		}
	}
	return *this;
}

std::string const & CCharacter::getName( void ) const{
	return this->_name;
}

void CCharacter::equip( AMateria* m ){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] == NULL){
			this->inventory[i] = m;
			break;
		}
	}
}

void CCharacter::unequip( int idx ){
	this->inventory[idx] = NULL;
}

void CCharacter::use( int idx, ICharacter& target ){
	if (idx >= 0 && idx < 4){
		if (this->inventory[idx] != NULL){
			this->inventory[idx]->use( target );
			delete this->inventory[idx];
			this->inventory[idx] = NULL;
		}
	}
}
