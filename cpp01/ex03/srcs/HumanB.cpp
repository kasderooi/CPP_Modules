#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	return ;
}

HumanB::~HumanB( void ){
	return ;
}

void	HumanB::setWeapon( Weapon thing ){
	*this->_weapon = thing;
}

void	HumanB::attack( void ){
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}
