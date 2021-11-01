#include <iostream>
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

void	test1( void ){
	Weapon        club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

void	test2( void ){
	Weapon        club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int	main( void ){
	test1();
	test2();
	return 0;
}
