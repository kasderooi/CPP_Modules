#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ){
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal Constructed" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "WrongAnimal DeConstructed" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal& original ){
	*this = original;
	return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& original ) {
	if (this != &original){
		_type = original._type;
	}
	return *this;
}

std::string WrongAnimal::getType( void )const{
	return this->_type;
}

void WrongAnimal::makeSound( void )const{
	std::cout << "this is an " << this->_type << " it can't do tricks yet" << std::endl;
}
