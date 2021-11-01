#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( void ){
	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " has entered the game" << std::endl;
	return ;
}

FragTrap::~FragTrap( void ){
	std::cout << "FragTrap " << this->_name << " has left the game" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=( const FragTrap& original ){
	if (this != &original){
		_attackDamage = original._attackDamage;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_name = original._name;
	}
	return *this;
}

void FragTrap::highFivesGuys(void){
	std::cout << "good work, high five?!" << std::endl;
}
