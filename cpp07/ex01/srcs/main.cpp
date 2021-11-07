#include "iter.hpp"
#include <string>
#include <cctype>

size_t plusone( size_t nbr ){
	return nbr + 1;
}



int	main( void ){
	char str[14] = "dit is string";
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	::print( str, strlen(str) );
 	std::cout << std::endl;
	::print( arr, 10 );
 	std::cout << std::endl;
	::iter( str, strlen(str) , toupper() );
	::print( str, strlen(str) );
 	std::cout << std::endl;
	::print( arr, 10 );
 	std::cout << std::endl;
	return 0;
}
