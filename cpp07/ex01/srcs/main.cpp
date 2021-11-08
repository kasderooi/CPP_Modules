#include "iter.hpp"

int	main( void ){
	char str[14] = "dit is string";
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	iter( str, strlen(str), print );
 	std::cout << std::endl;
	iter( arr, 10, print );
 	std::cout << std::endl;
	return 0;
}
