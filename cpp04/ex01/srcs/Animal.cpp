#include "Animal.hpp"

Animal::Animal( void ){
	this->_type = "Animal";
	std::cout << "Animal Constructed" << std::endl;
	return ;
}

Animal::~Animal( void ){
	std::cout << "Animal Destructed" << std::endl;
	return ;
}

Animal::Animal( const Animal& original ){
	*this = original;
	std::cout << "Animal Constructed" << std::endl;
	return ;
}

Animal& Animal::operator=( const Animal& original ) {
	if (this != &original){
		_type = original._type;
	}
	return *this;
}

std::string Animal::getType( void )const{
	return this->_type;
}

void Animal::setIdea( std::string idea, int index ){
	(void) idea;
	(void) index;
}

std::string Animal::getIdea( int index )const{
	(void) index;
	return NULL;
}

void Animal::makeSound( void )const{
	std::cout << "this is an " << this->_type << " it can't do tricks yet" << std::endl;
}
