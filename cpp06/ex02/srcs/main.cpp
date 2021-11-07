#include "Identify.hpp"

int main( void ){
	Base* instance = generate();

	identify( instance );
	identify( *instance );

	return 0;
}
