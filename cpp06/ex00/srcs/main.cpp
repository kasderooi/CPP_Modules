#include "scalar.hpp"

typedef bool (*checkFuncPoint)( std::string );
typedef void (*doFuncPoint)( std::string, t_values* );

checkFuncPoint checkF[6] = { &checkPseudoFloat, &checkPseudoDouble, &checkFloat, &checkDouble, &checkInt, &checkChar };
doFuncPoint doF[6] = { &doPseudoFloat, &doPseudoDouble, &doFloat, &doDouble, &doInt, &doChar };

int	main( int argc, char** argv ){
	t_values input;

	if ( argc != 2 ){
		std::cout << "give 1 argument" << std::endl;
		return 1;
	}
	try {
		for ( int i = 0; i < 6; i++ ){
			if ( ( checkF[i] )( argv[1] ) ) {
				( doF[i] )( argv[1], &input );
				break ;
			}
		}
		printBunch( &input );
	} catch ( int e ) {
		std::cout << "float: " << pseudoFloat[e] << std::endl;
		std::cout << "double: " << pseudoDouble[e] << std::endl;
	} catch ( const std::out_of_range& e ) {
		std::cout << "Out of range error: " << e.what() << std::endl;
	} catch ( const WrongInput& e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
