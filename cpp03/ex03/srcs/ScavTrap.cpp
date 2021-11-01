#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( void ){
	_energyPoints = 50;
	std::cout << "ScavTrap " << this->_name << " has entered the game" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ){
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " has entered the game" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap " << this->_name << " has left the game" << std::endl;
	return ;
}

void ScavTrap::attack( std::string const& target ){
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " amount of damage" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& original ) {
	if (this != &original){
		_attackDamage = original._attackDamage;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_name = original._name;
	}
	return *this;
}

void ScavTrap::guardGate( void ){
	std::cout << "ScavTrap " << this->_name << " has entered in gate keeper mode" << std::endl;
}
