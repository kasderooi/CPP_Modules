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
