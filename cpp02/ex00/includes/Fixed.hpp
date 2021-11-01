#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {

	private:

	int	_fpValue;
	static const int _frBits = 8;

	public:

	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const& original );

	int getRawBits( void ) const ;
	void setRawBits( int const raw );

	Fixed& operator=( Fixed const& original );

};

#endif
