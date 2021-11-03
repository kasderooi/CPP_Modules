#include "scalar.hpp"

bool checkPseudoFloat( std::string argv ){
	for ( int i = 0; i < 3; i++ )
		if ( !argv.compare(pseudoFloat[i]) )
			return true;
	return false;
}

bool checkPseudoDouble( std::string argv ){
	for ( int i = 0; i < 3; i++ )
		if ( !argv.compare(pseudoDouble[i]) )
			return true;
	return false;
}

bool checkFloat( std::string argv ){
	int len = argv.length();

	if (argv[len - 1] == 'f' && len > 1)
		return true;
	return false;
}

bool checkDouble( std::string argv ){
	for ( int i = 0; argv[i]; i++)
		if ( argv[i] == '.' )
			return true;
	return false;
}

bool checkInt( std::string argv ){
	for ( int i = 0; argv[i]; i++)
		if (!isdigit(argv[i]))
			return false;
	return true;
}

bool checkChar( std::string argv ){
	if ( argv.length() != 1 )
		return false;
	for ( int i = 0; argv[i]; i++)
		if (!isprint(argv[i]))
			return false;
	return true;
}

void doPseudoFloat( std::string argv ){
	for ( int i = 0; i < 3; i++ )
		if ( argv )
}

void doPseudoDouble( std::string argv ){
	
}

void doFloat( std::string argv, t_values *input ){
	input->f = std::stod (argv[1]);
}

void doDouble( std::string argv ){
	input->d = std::stod (argv[1]);
}

void doInt( std::string argv ){
	
}

void doChar( std::string argv ){
	
}

void printBunch( t_values input ){
	std::cout << "char :"
}
