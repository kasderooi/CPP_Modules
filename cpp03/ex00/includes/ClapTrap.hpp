#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	private:

	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
	ClapTrap( void );

	public:

	ClapTrap( std::string name );
	~ClapTrap( void );
	ClapTrap( const ClapTrap& original );
	
	ClapTrap& operator=( const ClapTrap& original );
	void attack( std::string const& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

};

#endif
