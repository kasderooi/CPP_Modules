#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal(){
	this->_type = "Cat";
	std::cout << "Cat Constructed" << std::endl;
	return ;
}

Cat::~Cat( void ){
	std::cout << "Cat DeConstructed" << std::endl;
	return ;
}

Cat::Cat( const Cat& original ){
	*this = original;
	return ;
}

Cat& Cat::operator=( const Cat& original ) {
	if (this != &original){
		_type = original._type;
	}
	return *this;
}

void Cat::makeSound( void )const{
	std::cout << "this is a " << this->_type << " and says meow" << std::endl;
}
