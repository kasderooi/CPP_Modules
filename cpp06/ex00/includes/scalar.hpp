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

std::string pseudoFloat[3] = { "-inff", "+inff", "nanf" };
std::string pseudoDouble[3] = { "-inf", "+inf", "nan" };

bool (*funcPoint)( std::string );

bool checkFloat( std::string argv );
bool checkDouble( std::string argv );
bool checkInt( std::string argv );
bool checkChar( std::string argv );

void doFloat( std::string argv );
void doDouble( std::string argv );
void doInt( std::string argv );
void doChar( std::string argv );

#endif
