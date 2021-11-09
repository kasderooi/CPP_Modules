#include "easyfind.hpp"
#include <vector>

int main ( void ){
	std::vector<int> ar{ 1, 2, 3, 4, 5, 6, 7 };
	int			a = 3;
	int			b = 8;

	std::cout << easyfind( ar, a ) << std::endl;
	std::cout << easyfind( ar, b ) << std::endl;
	return 0;
}
