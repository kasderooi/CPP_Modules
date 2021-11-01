#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

	public:

	FragTrap( void );
	FragTrap( std::string name );
	~FragTrap( void );
	FragTrap( const FragTrap& original );

	FragTrap& operator=( const FragTrap& original );

	virtual void highFivesGuys(void);

};

#endif
