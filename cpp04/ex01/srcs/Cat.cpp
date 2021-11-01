#include "Cat.hpp"

Cat::Cat( void ) : Animal(){
	this->_type = "Cat";
	this->_lobotomi = new Brain();
	std::cout << "Cat Constructed" << std::endl;
	return ;
}

Cat::~Cat( void ){
	delete this->_lobotomi;
	std::cout << "Cat Destructed" << std::endl;
	return ;
}

Cat::Cat( const Cat& original ){
	this->_lobotomi = new Brain();
	*this = original;
	std::cout << "Cat Constructed" << std::endl;
	return ;
}

Cat& Cat::operator=( const Cat& original ) {
	if (this != &original){
		_type = original._type;
		*(this->_lobotomi) = *(original._lobotomi);
	}
	return *this;
}

Animal& Cat::operator=( const Animal& original ) {
	*this = (Cat&)original;
	return *this;
}

void Cat::setIdea( std::string idea, int index ){
	this->_lobotomi->setBrain( idea, index );
}

std::string Cat::getIdea( int index )const{
	return this->_lobotomi->getBrain( index );
}

void Cat::makeSound( void )const{
	std::cout << "this is a " << this->_type << " and says meow" << std::endl;
}
