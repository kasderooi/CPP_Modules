#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

	public:

	ScavTrap( void );
	ScavTrap( std::string name );
	~ScavTrap( void );
	ScavTrap( const ScavTrap& original );

	void attack( std::string const& target );
	
	ScavTrap& operator=( const ScavTrap& original );

	virtual void guardGate( void );

};

#endif
