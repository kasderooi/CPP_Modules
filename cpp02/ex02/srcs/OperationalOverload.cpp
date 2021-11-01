#include "../includes/Fixed.hpp"

bool Fixed::operator>( const Fixed& obj2 ) const{
	return this->_fpValue > obj2.getRawBits();
}

bool Fixed::operator<( const Fixed& obj2 ) const{
	return this->_fpValue < obj2.getRawBits();
}

bool Fixed::operator>=( const Fixed& obj2 ) const{
	return !(*this < obj2);
}

bool Fixed::operator<=( const Fixed& obj2 ) const{
	return !(*this > obj2);
}

bool Fixed::operator==( const Fixed& obj2 ) const{
	return this->_fpValue == obj2.getRawBits();
}

bool Fixed::operator!=( const Fixed& obj2 ) const{
	return !(*this == obj2);
}

Fixed Fixed::operator+( Fixed const& object ) const{
	Fixed res;
	res.setRawBits(this->_fpValue + object.getRawBits());
	return res;
}

Fixed Fixed::operator-( Fixed const& object ) const{
	Fixed res;
	res.setRawBits(this->_fpValue - object.getRawBits());
	return res;
}

Fixed Fixed::operator/( Fixed const& object ) const{
	Fixed res;
	res.setRawBits((this->_fpValue / object.getRawBits()) * 1 << this->_frBits);
	return res;
}

Fixed Fixed::operator*( Fixed const& object ) const{
	Fixed res;

	res.setRawBits(this->_fpValue * object.getRawBits() / (1 << this->_frBits));
	return res;
}

Fixed& Fixed::operator++( void ){
	this->_fpValue += 1;
	return *this;
}

Fixed Fixed::operator++( int ){
	Fixed old = *this;
	this->_fpValue += 1;
	return old;
}

Fixed& Fixed::operator--( void ){
	this->_fpValue -= 1;
	return *this;
}

Fixed Fixed::operator--( int ){
	Fixed old = *this;
	this->_fpValue -= 1;
	return old;
}
