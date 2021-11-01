#include "../includes/ClapTrap.hpp"

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
	return 0;
}
