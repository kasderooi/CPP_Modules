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
	for ( int i = 0; i < 6; i++ ){
		if ( ( checkF[i] )( argv[1] ) ) {
			( doF[i] )( argv[1], &input );
			break ;
		}
	}
	printBunch( &input );
	return 0;
}
