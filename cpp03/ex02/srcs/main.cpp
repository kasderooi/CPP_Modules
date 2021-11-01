#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

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
	std::cout << std::endl;
	FragTrap fraggie( "fragchap" );
	fraggie.attack( "berend" );
	fraggie.takeDamage( 3 );
	fraggie.beRepaired( 2 );
	fraggie.takeDamage( 3 );
	fraggie.beRepaired( 2 );
	fraggie.takeDamage( 3 );
	fraggie.beRepaired( 2 );
	fraggie.takeDamage( 3 );
	fraggie.beRepaired( 2 );
	fraggie.takeDamage( 3 );
	fraggie.beRepaired( 2 );
	return 0;
}
