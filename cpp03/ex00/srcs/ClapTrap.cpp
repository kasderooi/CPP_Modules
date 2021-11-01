#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ){
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << this->_name << " has entered the game" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void ){
	std::cout << "ClapTrap " << this->_name << " has left the game" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap& original ){
	*this = original;
	return ;
}

void ClapTrap::attack( std::string const& target ){
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " amount of damage" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ){
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage" << std::endl;
	this->_hitPoints += amount;
	std::cout << "* ClapTrap " << this->_name << " has " << this->_hitPoints << " attackDamage" << " *" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ){
	std::cout << "ClapTrap " << this->_name << " is being repaired by " << amount << " hitpoints" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= amount;
	std::cout << "* ClapTrap " << this->_name << " has " << this->_energyPoints << " energy left" << " *" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& original ) {
	if (this != &original){
		_attackDamage = original._attackDamage;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_name = original._name;
	}
	return *this;
}
