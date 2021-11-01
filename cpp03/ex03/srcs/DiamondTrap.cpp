#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ){
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name ), ScavTrap(), FragTrap(){
	this->_name = name;
	std::cout << "DiamondTrap " << this->_name << " has entered the game" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void ){
	std::cout << "DiamondTrap " << this->_name << " has left the game" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap& original ){
	*this = original;
	return ;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& original ) {
	if (this != &original){
		_attackDamage = original._attackDamage;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_name = original._name;
	}
	return *this;
}

void DiamondTrap::whoAmI( void ){
	std::cout << this->_name << std::endl;
}
