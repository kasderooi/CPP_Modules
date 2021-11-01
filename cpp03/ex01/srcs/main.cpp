#include "../includes/ScavTrap.hpp"

int	main( void ){
	ClapTrap clappie( "butclap" );
	clappie.attack( "berend" );
	clappie.takeDamage( 3 );
	clappie.beRepaired( 2 );
	clappie.takeDamage( 3 );
	clappie.beRepaired( 2 );
	clappie.takeDamage( 3 );
	clappie.beRepaired( 2 );
	clappie.takeDamage( 3 );
	clappie.beRepaired( 2 );
	clappie.takeDamage( 3 );
	clappie.beRepaired( 2 );
	std::cout << std::endl;
	ScavTrap scavvie( "scavslap" );
	scavvie.attack( "berend" );
	scavvie.takeDamage( 3 );
	scavvie.beRepaired( 2 );
	scavvie.takeDamage( 3 );
	scavvie.beRepaired( 2 );
	scavvie.takeDamage( 3 );
	scavvie.beRepaired( 2 );
	scavvie.takeDamage( 3 );
	scavvie.beRepaired( 2 );
	scavvie.takeDamage( 3 );
	scavvie.beRepaired( 2 );
	return 0;
}
