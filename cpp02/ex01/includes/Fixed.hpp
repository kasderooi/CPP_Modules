#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

	private:

	int	_fpValue;
	static const int _frBits = 8;

	public:

	Fixed( void );
	Fixed( int const input );
	Fixed( float const input );
	~Fixed( void );
	Fixed( Fixed const& original );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed& operator=( Fixed const& original );

};

std::ostream& operator<<( std::ostream& os, Fixed const& object );

#endif
