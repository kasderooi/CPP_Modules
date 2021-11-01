#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {

	private:

	std::string _type;

	public:

	Weapon( std::string str );
	~Weapon( void );

	void setType( std::string str );
	std::string const &getType( void );

};

#endif
