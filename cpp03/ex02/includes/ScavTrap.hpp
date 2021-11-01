#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

	public:

	ScavTrap( void );
	ScavTrap( std::string name );
	~ScavTrap( void );
	ScavTrap( const ScavTrap& original );

	virtual void attack( std::string const& target );
	
	ScavTrap& operator=( const ScavTrap& original );

	void guardGate( void );

};

#endif
