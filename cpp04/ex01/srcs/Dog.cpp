#include "Dog.hpp"

Dog::Dog( void ) : Animal(){
	this->_type = "Dog";
	this->_lobotomi = new Brain();
	std::cout << "Dog Constructed" << std::endl;
	return ;
}

Dog::~Dog( void ){
	delete this->_lobotomi;
	std::cout << "Dog Destructed" << std::endl;
	return ;
}

Dog::Dog( const Dog& original ){
	this->_lobotomi = new Brain();
	*this = original;
	std::cout << "Dog Constructed" << std::endl;
	return ;
}

Dog& Dog::operator=( const Dog& original ) {
	if (this != &original){
		_type = original._type;
		*(this->_lobotomi) = *(original._lobotomi);
	}
	return *this;
}

Animal& Dog::operator=( const Animal& original ) {
	*this = (Dog&)original;
	return *this;
}

void Dog::setIdea( std::string idea, int index ){
	this->_lobotomi->setBrain( idea, index );
}

std::string Dog::getIdea( int index )const{
	return this->_lobotomi->getBrain( index );
}

void Dog::makeSound( void )const{
	std::cout << "this is a " << this->_type << " and says woef" << std::endl;
}
