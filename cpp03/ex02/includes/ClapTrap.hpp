#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	protected:

	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

	public:

	ClapTrap( void );
	ClapTrap( std::string name );
	~ClapTrap( void );
	ClapTrap( const ClapTrap& original );
	
	ClapTrap& operator=( const ClapTrap& original );
	virtual void attack( std::string const& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

};

#endif
