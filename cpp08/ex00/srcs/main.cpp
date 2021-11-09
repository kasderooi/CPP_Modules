#include "easyfind.hpp"
#include <vector>

int main ( void ){
	std::vector<int> ar;
	ar.push_back(1);
	ar.push_back(2);
	ar.push_back(3);
	ar.push_back(4);
	ar.push_back(5);
	int			a = 3;
	int			b = 8;

	try {
		std::cout << (*easyfind( ar, a )) << std::endl;
	} catch ( NotFoundException &e ) {
		std::cout << e.what() << std::endl;
	}
	try {	
		std::cout << (*easyfind( ar, b )) << std::endl;
	} catch ( NotFoundException &e ) { 
		std::cout << e.what() << std::endl;
	}
	return 0;
}
