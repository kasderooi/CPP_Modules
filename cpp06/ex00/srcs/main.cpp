#include "scalar.hpp"

int	main( int argc, char** argv ){
	// int	i;
	// float f;
	// char c;
	double d;

	if (argc != 2)
		return 1;
	if ( checkFloat( argv[1] ) )
		std::cout << "float" << std::endl;
	if ( checkDouble( argv[1] ) ){
		d = std::stod (argv[1]);
	}
	if ( checkInt( argv[1] ) )
		std::cout << "int" << std::endl;
	if ( checkChar( argv[1] ) )
		std::cout << "char" << std::endl;
	return 0;
}
