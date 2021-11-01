#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

	private:

	std::string _name;
	using FragTrap::_hitPoints;
	using ScavTrap::_energyPoints;
	using FragTrap::_attackDamage;

	public:

	DiamondTrap( void );
	DiamondTrap( std::string name );
	~DiamondTrap( void );
	DiamondTrap( const DiamondTrap& original );

	using ScavTrap::attack;

	DiamondTrap& operator=( const DiamondTrap& original );
	void whoAmI( void );
};

#endif
