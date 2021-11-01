#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _fpValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const& original ) : _fpValue(original._fpValue){
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpValue;
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpValue = raw;
}

Fixed& Fixed::operator=( Fixed const& original ){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &original){
		_fpValue = original.getRawBits();
	}
	return *this;
}
