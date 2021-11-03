#include "scalar.hpp"
#include <iomanip>

std::string pseudoFloat[3] = { "-inff", "+inff", "nanf" };
std::string pseudoDouble[3] = { "-inf", "+inf", "nan" };

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
	for ( int i = 0; argv[i]; i++) {
		if ( argv[i] == '-' && i == 0 )
			i++;
		if (!isdigit(argv[i]))
			return false;
	}
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

void doPseudoFloat( std::string argv, t_values *input ){
	(void) input;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	for ( int i = 0; i < 3; i++ )
		if ( !argv.compare(pseudoFloat[i]) ){
			std::cout << "float: " << pseudoFloat[i] << std::endl;
			std::cout << "double: " << pseudoDouble[i] << std::endl;
		}
}

void doPseudoDouble( std::string argv, t_values *input ){
	(void) input;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	for ( int i = 0; i < 3; i++ )
		if ( !argv.compare(pseudoDouble[i]) ){
			std::cout << "float: " << pseudoFloat[i] << std::endl;
			std::cout << "double: " << pseudoDouble[i] << std::endl;
		}
}

void doFloat( std::string argv, t_values *input ){
	input->f = std::stod(argv);
	input->d = double(input->f);
	input->i = int(input->f);
	input->c = char(input->f);
}

void doDouble( std::string argv, t_values *input ){
	input->d = std::stod(argv);
	input->f = float(input->d);
	input->i = int(input->d);
	input->c = char(input->d);
}

void doInt( std::string argv, t_values *input ){
	input->i = std::stoi(argv);
	input->f = float(input->i);
	input->d = double(input->i);
	input->c = char(input->i);
}

void doChar( std::string argv, t_values *input ){
	input->c = argv[0];
	input->f = float(input->c);
	input->d = double(input->c);
	input->i = int(input->c);
}

void printBunch( t_values *input ){
	// if (!input)
	// 	return;
	if ( input->i > 32 && input->i < 127 )
		std::cout << "char: " << input->c << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << input->i << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "float: " << input->f << "f" << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "double: " << input->d << std::endl;
}
