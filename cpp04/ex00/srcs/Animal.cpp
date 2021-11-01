#include "../includes/Animal.hpp"

Animal::Animal( void ){
	this->_type = "Animal";
	std::cout << "Animal Constructed" << std::endl;
	return ;
}

Animal::~Animal( void ){
	std::cout << "Animal DeConstructed" << std::endl;
	return ;
}

Animal::Animal( const Animal& original ){
	*this = original;
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

void Animal::makeSound( void )const{
	std::cout << "this is an " << this->_type << " it can't do tricks yet" << std::endl;
}
