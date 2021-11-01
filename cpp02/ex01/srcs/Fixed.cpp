#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _fpValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const input ){
	std::cout << "Int constructor called" << std::endl;
	this->_fpValue = 0x00000000;
	this->_fpValue = input << this->_frBits;
	return ;
}

Fixed::Fixed( float const input ){
	std::cout << "Float constructor called" << std::endl;
	this->_fpValue = 0x00000000;	
	this->_fpValue = roundf(input * (1 << this->_frBits));
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

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpValue;
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpValue = raw;
}

float Fixed::toFloat( void ) const{
	float res = this->_fpValue;
	res /= (1 << this->_frBits);
	return (res);
}

int Fixed::toInt( void ) const{
	int	sign = 1;
	int	res = this->_fpValue;
	if (res < 0){
		sign *= -1;
		res = ~res + 1;
	}
	return ((res & 0xFFFFFF00) >> this->_frBits) * sign;
}

Fixed& Fixed::operator=( Fixed const& original ){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &original){
		_fpValue = original.getRawBits();
	}
	return *this;
}

std::ostream& operator<<( std::ostream& os, Fixed const& object ){
	os << object.toFloat();
	return os;
}
