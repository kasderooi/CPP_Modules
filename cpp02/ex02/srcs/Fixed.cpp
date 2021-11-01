#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _fpValue(0) {
	return ;
}

Fixed::Fixed( int const input ){
	this->_fpValue = 0x00000000;
	this->_fpValue = input << this->_frBits;
	return ;
}

Fixed::Fixed( float const input ){
	this->_fpValue = 0x00000000;	
	this->_fpValue = roundf(input * (1 << this->_frBits));
	return ;
}

Fixed::~Fixed( void ){
	return ;
}

Fixed::Fixed( Fixed const& original ) : _fpValue(original._fpValue){
	return ;
}

int Fixed::getRawBits( void ) const{
	return this->_fpValue;
}

void Fixed::setRawBits( int const raw ){
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
	if (this != &original){
		_fpValue = original.getRawBits();
	}
	return *this;
}

std::ostream& operator<<( std::ostream& os, Fixed const& object ){
	os << object.toFloat();
	return os;
}

Fixed& Fixed::min( Fixed& val1, Fixed& val2 ){
	if (val1 > val2)
		return val2;
	return val1;
}

const Fixed& Fixed::min( const Fixed& val1, const Fixed& val2 ){
	if (val1 > val2)
		return val2;
	return val1;
}

Fixed& Fixed::max( Fixed& val1, Fixed& val2 ){
	if (val1 < val2)
		return val2;
	return val1;
}

const Fixed& Fixed::max( const Fixed& val1, const Fixed& val2 ){
	if (val1 < val2)
		return val2;
	return val1;
}
