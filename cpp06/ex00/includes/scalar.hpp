#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>

typedef struct s_values
{
	int		i;
	float	f;
	char	c;
	double	d;
}			t_values;

bool checkPseudoFloat( std::string argv );
bool checkPseudoDouble( std::string argv );
bool checkFloat( std::string argv );
bool checkDouble( std::string argv );
bool checkInt( std::string argv );
bool checkChar( std::string argv );

void doPseudoFloat( std::string argv, t_values *input );
void doPseudoDouble( std::string argv, t_values *input );
void doFloat( std::string argv, t_values *input );
void doDouble( std::string argv, t_values *input );
void doInt( std::string argv, t_values *input );
void doChar( std::string argv, t_values *input );

void printBunch( t_values *input );


#endif
