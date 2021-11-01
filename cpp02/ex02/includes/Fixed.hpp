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

	bool operator>( const Fixed& obj2 ) const;
	bool operator<( const Fixed& obj2 ) const;
	bool operator>=( const Fixed& obj2 ) const;
	bool operator<=( const Fixed& obj2 ) const;
	bool operator==( const Fixed& obj2 ) const;
	bool operator!=( const Fixed& obj2 ) const;

	Fixed operator+( const Fixed& object ) const;
	Fixed operator-( const Fixed& object ) const;
	Fixed operator*( const Fixed& object ) const;
	Fixed operator/( const Fixed& object ) const;

	Fixed& operator++( void );
	Fixed operator++( int );
	Fixed& operator--( void );
	Fixed operator--( int );

	static Fixed& min( Fixed& val1, Fixed& val2 );
	static const Fixed& min( const Fixed& val1, const Fixed& val2 );
	static Fixed& max( Fixed& val1, Fixed& val2 );
	static const Fixed& max( const Fixed& val1, const Fixed& val2 );

};

std::ostream& operator<<( std::ostream& os, Fixed const& object );


#endif
