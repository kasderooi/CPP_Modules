#include "../includes/Fixed.hpp"




int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed e( 1 );
	Fixed f( 2 );
	Fixed g;

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;
	std::cout << e << std::endl;
	std::cout << ++e << std::endl;
	std::cout << e << std::endl;
	std::cout << e++ << std::endl;
	std::cout << e << std::endl;
	std::cout << e << std::endl;
	std::cout << --e << std::endl;
	std::cout << e << std::endl;
	std::cout << e-- << std::endl;
	std::cout << e << std::endl;
	g = Fixed::min(a, f);
	std::cout << "the smallest is " << g  << std::endl;
	std::cout << "the biggest is " << Fixed::max(a, f) << std::endl;
	std::cout << g << " + " << b << " = ";
	g = g + b;
	std::cout << g << std::endl;
	g = Fixed::min(b, c);
	std::cout << "the smallest is " << g  << std::endl;
	std::cout << "the biggest is " << Fixed::max(b, c) << std::endl;
	std::cout << b << " + " << c << " = ";
	g = b + c;
	std::cout << g << std::endl;
	return 0;
}
