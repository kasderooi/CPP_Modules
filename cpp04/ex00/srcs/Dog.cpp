#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal(){
	this->_type = "Dog";
	std::cout << "Dog Constructed" << std::endl;
	return ;
}

Dog::~Dog( void ){
	std::cout << "Dog DeConstructed" << std::endl;
	return ;
}

Dog::Dog( const Dog& original ){
	*this = original;
	return ;
}

Dog& Dog::operator=( const Dog& original ) {
	if (this != &original){
		_type = original._type;
	}
	return *this;
}

void Dog::makeSound( void )const{
	std::cout << "this is a " << this->_type << " and says woef" << std::endl;
}
